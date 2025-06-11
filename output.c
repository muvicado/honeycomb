//
//  output.c
//  honeycomb
//
//  Created by Mark Barclay on 6/11/25.
//
//
#if 0
Honeycomb Path Counter
=====================
Honeycomb Graph Structure:
Total nodes: 37

Adjacency relationships:
Node 0: connected to [1, 2, 3, 4, 5, 6]
Node 1: connected to [0, 2, 6, 7, 8, 13]
Node 2: connected to [0, 1, 3, 8, 9, 14]
Node 3: connected to [0, 2, 4, 9, 10, 15]
Node 4: connected to [0, 3, 5, 10, 11, 16]
Node 5: connected to [0, 4, 6, 11, 12, 17]
Node 6: connected to [0, 1, 5, 7, 12, 18]
Node 7: connected to [1, 6, 13, 18, 19, 20]
Node 8: connected to [1, 2, 13, 14, 21, 22]
Node 9: connected to [2, 3, 14, 15, 23, 24]
Node 10: connected to [3, 4, 15, 16, 25, 26]
Node 11: connected to [4, 5, 16, 17, 27, 28]
Node 12: connected to [5, 6, 17, 18, 29, 30]
Node 13: connected to [1, 7, 8, 20, 21, 32]
Node 14: connected to [2, 8, 9, 22, 23, 33]
Node 15: connected to [3, 9, 10, 24, 25, 34]
Node 16: connected to [4, 10, 11, 26, 27, 35]
Node 17: connected to [5, 11, 12, 28, 29, 36]
Node 18: connected to [6, 7, 12, 19, 30, 31]
Node 19: connected to [7, 18, 20, 31]
Node 20: connected to [7, 13, 19, 32]
Node 21: connected to [8, 13, 22, 32]
Node 22: connected to [8, 14, 21, 33]
Node 23: connected to [9, 14, 24, 33]
Node 24: connected to [9, 15, 23, 34]
Node 25: connected to [10, 15, 26, 34]
Node 26: connected to [10, 16, 25, 35]
Node 27: connected to [11, 16, 28, 35]
Node 28: connected to [11, 17, 27, 36]
Node 29: connected to [12, 17, 30, 36]
Node 30: connected to [12, 18, 29, 31]
Node 31: connected to [18, 19, 30]
Node 32: connected to [13, 20, 21]
Node 33: connected to [14, 22, 23]
Node 34: connected to [15, 24, 25]
Node 35: connected to [16, 26, 27]
Node 36: connected to [17, 28, 29]

Counting simple paths starting from node 0 (center)
Maximum path length: 3
Computing...
Start node: 0
====================================================
beginning: countSimplePaths(from: 0, maxLength: 3)
====================================================

Sorted array (lexicographical order):
path: [0, 1]
path: [0, 1, 2]
path: [0, 1, 2, 3]
path: [0, 1, 2, 8]
path: [0, 1, 2, 9]
path: [0, 1, 2, 14]
path: [0, 1, 6]
path: [0, 1, 6, 5]
path: [0, 1, 6, 7]
path: [0, 1, 6, 12]
path: [0, 1, 6, 18]
path: [0, 1, 7]
path: [0, 1, 7, 6]
path: [0, 1, 7, 13]
path: [0, 1, 7, 18]
path: [0, 1, 7, 19]
path: [0, 1, 7, 20]
path: [0, 1, 8]
path: [0, 1, 8, 2]
path: [0, 1, 8, 13]
path: [0, 1, 8, 14]
path: [0, 1, 8, 21]
path: [0, 1, 8, 22]
path: [0, 1, 13]
path: [0, 1, 13, 7]
path: [0, 1, 13, 8]
path: [0, 1, 13, 20]
path: [0, 1, 13, 21]
path: [0, 1, 13, 32]
path: [0, 2]
path: [0, 2, 1]
path: [0, 2, 1, 6]
path: [0, 2, 1, 7]
path: [0, 2, 1, 8]
path: [0, 2, 1, 13]
path: [0, 2, 3]
path: [0, 2, 3, 4]
path: [0, 2, 3, 9]
path: [0, 2, 3, 10]
path: [0, 2, 3, 15]
path: [0, 2, 8]
path: [0, 2, 8, 1]
path: [0, 2, 8, 13]
path: [0, 2, 8, 14]
path: [0, 2, 8, 21]
path: [0, 2, 8, 22]
path: [0, 2, 9]
path: [0, 2, 9, 3]
path: [0, 2, 9, 14]
path: [0, 2, 9, 15]
path: [0, 2, 9, 23]
path: [0, 2, 9, 24]
path: [0, 2, 14]
path: [0, 2, 14, 8]
path: [0, 2, 14, 9]
path: [0, 2, 14, 22]
path: [0, 2, 14, 23]
path: [0, 2, 14, 33]
path: [0, 3]
path: [0, 3, 2]
path: [0, 3, 2, 1]
path: [0, 3, 2, 8]
path: [0, 3, 2, 9]
path: [0, 3, 2, 14]
path: [0, 3, 4]
path: [0, 3, 4, 5]
path: [0, 3, 4, 10]
path: [0, 3, 4, 11]
path: [0, 3, 4, 16]
path: [0, 3, 9]
path: [0, 3, 9, 2]
path: [0, 3, 9, 14]
path: [0, 3, 9, 15]
path: [0, 3, 9, 23]
path: [0, 3, 9, 24]
path: [0, 3, 10]
path: [0, 3, 10, 4]
path: [0, 3, 10, 15]
path: [0, 3, 10, 16]
path: [0, 3, 10, 25]
path: [0, 3, 10, 26]
path: [0, 3, 15]
path: [0, 3, 15, 9]
path: [0, 3, 15, 10]
path: [0, 3, 15, 24]
path: [0, 3, 15, 25]
path: [0, 3, 15, 34]
path: [0, 4]
path: [0, 4, 3]
path: [0, 4, 3, 2]
path: [0, 4, 3, 9]
path: [0, 4, 3, 10]
path: [0, 4, 3, 15]
path: [0, 4, 5]
path: [0, 4, 5, 6]
path: [0, 4, 5, 11]
path: [0, 4, 5, 12]
path: [0, 4, 5, 17]
path: [0, 4, 10]
path: [0, 4, 10, 3]
path: [0, 4, 10, 15]
path: [0, 4, 10, 16]
path: [0, 4, 10, 25]
path: [0, 4, 10, 26]
path: [0, 4, 11]
path: [0, 4, 11, 5]
path: [0, 4, 11, 16]
path: [0, 4, 11, 17]
path: [0, 4, 11, 27]
path: [0, 4, 11, 28]
path: [0, 4, 16]
path: [0, 4, 16, 10]
path: [0, 4, 16, 11]
path: [0, 4, 16, 26]
path: [0, 4, 16, 27]
path: [0, 4, 16, 35]
path: [0, 5]
path: [0, 5, 4]
path: [0, 5, 4, 3]
path: [0, 5, 4, 10]
path: [0, 5, 4, 11]
path: [0, 5, 4, 16]
path: [0, 5, 6]
path: [0, 5, 6, 1]
path: [0, 5, 6, 7]
path: [0, 5, 6, 12]
path: [0, 5, 6, 18]
path: [0, 5, 11]
path: [0, 5, 11, 4]
path: [0, 5, 11, 16]
path: [0, 5, 11, 17]
path: [0, 5, 11, 27]
path: [0, 5, 11, 28]
path: [0, 5, 12]
path: [0, 5, 12, 6]
path: [0, 5, 12, 17]
path: [0, 5, 12, 18]
path: [0, 5, 12, 29]
path: [0, 5, 12, 30]
path: [0, 5, 17]
path: [0, 5, 17, 11]
path: [0, 5, 17, 12]
path: [0, 5, 17, 28]
path: [0, 5, 17, 29]
path: [0, 5, 17, 36]
path: [0, 6]
path: [0, 6, 1]
path: [0, 6, 1, 2]
path: [0, 6, 1, 7]
path: [0, 6, 1, 8]
path: [0, 6, 1, 13]
path: [0, 6, 5]
path: [0, 6, 5, 4]
path: [0, 6, 5, 11]
path: [0, 6, 5, 12]
path: [0, 6, 5, 17]
path: [0, 6, 7]
path: [0, 6, 7, 1]
path: [0, 6, 7, 13]
path: [0, 6, 7, 18]
path: [0, 6, 7, 19]
path: [0, 6, 7, 20]
path: [0, 6, 12]
path: [0, 6, 12, 5]
path: [0, 6, 12, 17]
path: [0, 6, 12, 18]
path: [0, 6, 12, 29]
path: [0, 6, 12, 30]
path: [0, 6, 18]
path: [0, 6, 18, 7]
path: [0, 6, 18, 12]
path: [0, 6, 18, 19]
path: [0, 6, 18, 30]
path: [0, 6, 18, 31]

Results:
========
Maximum node count: 4
Number of unique simple paths: 174
Execution time: 0.0021 seconds
Program ended with exit code: 0

Results:
========
Maximum node count: 4
Number of unique simple paths: 174
Printing Debugging Info: false
Execution time: 0.0017 seconds

Results:
========
Maximum node count: 10
Number of unique simple paths: 173514
Printing Debugging Info: false
Execution time: 6.0153 seconds

Results:
========
Maximum node count: 9
Number of unique simple paths: 60594
Printing Debugging Info: false
Execution time: 1.9839 seconds
Program ended with exit code: 0

#endif
