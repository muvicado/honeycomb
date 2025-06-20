//
//  main.swift
//  honeycomb
//
//  Created by Mark Barclay on 6/9/25.
//

import Foundation

let MAX_NODE_COUNT: Int = 9
let MAX_LENGTH: Int = MAX_NODE_COUNT - 1
let printDebuggingInfo: Bool = false
let printGraphInfo: Bool = false

class HoneycombGraph {
    let nodes: Set<Int>
    let numNodes: Int = 37
    let maxLength: Int = MAX_LENGTH
    let adjacencyList: [Int: Set<Int>]
    var all_paths = [[Int]]()
    var path = [Int]()

    init() {
        // Create a honeycomb graph with numNodes (37) nodes
        // Node 0 is the center, surrounded by rings
        
        var adjList: [Int: Set<Int>] = [:]
        
        // Initialize all nodes
        for i in 0..<numNodes {
            adjList[i] = Set<Int>()
        }
        
        // Center node (0) connects to first ring (1-6)
        adjList[0] = Set([1, 2, 3, 4, 5, 6])
        
        // First ring connections
        adjList[1] = Set([0, 2, 6, 7, 8, 13])
        adjList[2] = Set([0, 1, 3, 8, 9, 14])
        adjList[3] = Set([0, 2, 4, 9, 10, 15])
        adjList[4] = Set([0, 3, 5, 10, 11, 16])
        adjList[5] = Set([0, 4, 6, 11, 12, 17])
        adjList[6] = Set([0, 5, 1, 12, 7, 18])
        
        // Second ring connections
        adjList[7] = Set([1, 6, 13, 18, 19, 20])
        adjList[8] = Set([1, 2, 13, 14, 21, 22])
        adjList[9] = Set([2, 3, 14, 15, 23, 24])
        adjList[10] = Set([3, 4, 15, 16, 25, 26])
        adjList[11] = Set([4, 5, 16, 17, 27, 28])
        adjList[12] = Set([5, 6, 17, 18, 29, 30])
        adjList[13] = Set([7, 8, 1, 20, 21, 32])
        adjList[14] = Set([8, 9, 2, 22, 23, 33])
        adjList[15] = Set([9, 10, 3, 24, 25, 34])
        adjList[16] = Set([10, 11, 4, 26, 27, 35])
        adjList[17] = Set([11, 12, 5, 28, 29, 36])
        adjList[18] = Set([12, 7, 6, 30, 31, 19])
        
        // Third ring connections
        adjList[19] = Set([7, 18, 20, 31])
        adjList[20] = Set([7, 13, 19, 32])
        adjList[21] = Set([8, 13, 22, 32])
        adjList[22] = Set([8, 14, 21, 33])
        adjList[23] = Set([9, 14, 24, 33])
        adjList[24] = Set([9, 15, 23, 34])
        adjList[25] = Set([10, 15, 26, 34])
        adjList[26] = Set([10, 16, 25, 35])
        adjList[27] = Set([11, 16, 28, 35])
        adjList[28] = Set([11, 17, 27, 36])
        adjList[29] = Set([12, 17, 30, 36])
        adjList[30] = Set([12, 18, 29, 31])
        adjList[31] = Set([18, 19, 30 ])
        adjList[32] = Set([13, 20, 21])
        adjList[33] = Set([14, 22, 23])
        adjList[34] = Set([15, 24, 25])
        adjList[35] = Set([16, 26, 27])
        adjList[36] = Set([17, 28, 29])

        self.nodes = Set(0..<numNodes)
        self.adjacencyList = adjList
    }
    
    func countSimplePaths(from start: Int, maxLength: Int) -> Int {
        var totalPaths = 0
        print("====================================================")
        print("beginning: countSimplePaths(from: \(start), maxLength: \(maxLength))")
        print("====================================================")
        // depth-first search
        func dfs(currentNode: Int, visited: Set<Int>, pathLength: Int, path: inout Array<Int>) {
            // add node to path (just for displaying it)...
            if currentNode >= 0 {
                path.append(currentNode)
                //path = path + String(format: "%d, ", currentNode) // use "%02d" for fixed width
            }
            // Count this path if it has length > 0
            if pathLength > 0 {
                totalPaths += 1
                let sortedVisited = visited.sorted()
                if printDebuggingInfo {
                    print("visited: \(sortedVisited)")
                    print("path #\(totalPaths): \(path)")
                }
                all_paths.append(path)
            }

            // If we've reached max length, stop exploring
            if pathLength >= maxLength {
                path.removeLast()
                return
            }

            // Explore neighbors
            if let neighbors = adjacencyList[currentNode] {
                for neighbor in neighbors {
                    // if we have not yet visited this node, note that we have visted it, and recurse
                    if !visited.contains(neighbor) {
                        var newVisited = visited
                        newVisited.insert(neighbor)
                        dfs(currentNode: neighbor, visited: newVisited, pathLength: pathLength + 1, path: &path)
                    }
                }
            }
            if pathLength > 0 {
                path.removeLast()
            }
        }
        
        // Start DFS from the starting node
        var initialVisited = Set<Int>()
        initialVisited.insert(start)
        path = []
        dfs(currentNode: start, visited: initialVisited, pathLength: 0, path: &path)
        
        // sort and display the paths...
        // Sort using lexicographical order
        all_paths.sort { (array1, array2) in
            return array1.lexicographicallyPrecedes(array2)
        }
        print("\nSorted array (lexicographical order):")
        for path in all_paths {
            print("path: \(path)")
        }
        return totalPaths
    }
    
    func printGraphInfo() {
        // Show Adjacency relationships
        print("Honeycomb Graph Structure:")
        print("Total nodes: \(nodes.count)")
        print("\nAdjacency relationships:")
        for node in 0..<numNodes {
            if let neighbors = adjacencyList[node] {
                let sortedNeighbors = neighbors.sorted()
                print("Node \(node): connected to \(sortedNeighbors)")
            }
        }
        print()
    }
}

// Main execution
func main() {
    print("Honeycomb Path Counter")
    print("=====================")

    let maxLength = MAX_LENGTH
    let startNode = 0  // Center node

    let graph = HoneycombGraph()
    
    if printGraphInfo {
        // Print  the graph structure
        graph.printGraphInfo()
    }
    

    print("Counting simple paths starting from node \(startNode) (center)")
    print("Maximum path length: \(maxLength)")
    print("Computing...")
    
    let startTime = Date()
    print("Start node: \(startNode)")
    let pathCount = graph.countSimplePaths(from: startNode, maxLength: maxLength)
    let endTime = Date()
    
    let executionTime = endTime.timeIntervalSince(startTime)
    
    print("\nResults:")
    print("========")
    print("Maximum node count: \(MAX_NODE_COUNT)")
    print("Number of unique simple paths: \(pathCount)")
    print("Printing Debugging Info: \(printDebuggingInfo)")
    print("Execution time: \(String(format: "%.4f", executionTime)) seconds")
    
    // Breakdown by path length
    //    print("\nBreakdown by path length:")
    //    for length in 1...maxLength {
    //        let graph2 = HoneycombGraph()
    //        let pathsOfLength = graph2.countSimplePathsOfExactLength(from: startNode, exactLength: length)
    //        print("Length \(length): \(pathsOfLength) paths")
    //    }
}

//extension HoneycombGraph {
//    func countSimplePathsOfExactLength(from start: Int, exactLength: Int) -> Int {
//        var pathCount = 0
//        
//        func dfs(currentNode: Int, visited: Set<Int>, pathLength: Int) {
//            if pathLength == exactLength {
//                pathCount += 1
//                return
//            }
//            
//            if let neighbors = adjacencyList[currentNode] {
//                for neighbor in neighbors {
//                    if !visited.contains(neighbor) {
//                        var newVisited = visited
//                        newVisited.insert(neighbor)
//                        dfs(currentNode: neighbor, visited: newVisited, pathLength: pathLength + 1)
//                    }
//                }
//            }
//        }
//        
//        var initialVisited = Set<Int>()
//        initialVisited.insert(start)
//        dfs(currentNode: start, visited: initialVisited, pathLength: 0)
//        
//        return pathCount
//    }
//}

// Run the program
main()
