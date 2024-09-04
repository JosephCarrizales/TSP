# Traveling Salesman Problem (TSP) Solver

This project is an implementation of a dynamic programming solution to the classic Traveling Salesman Problem (TSP). The goal of the TSP is to find the shortest possible tour that visits each vertex exactly once and returns to the starting vertex.

# Features
Graph Representation: The graph is represented using both an adjacency list and an adjacency matrix, allowing for efficient traversal and edge cost retrieval.
Dynamic Programming Approach: The solution leverages dynamic programming to efficiently compute the minimum cost tour. Memoization is used to store intermediate results to avoid redundant calculations.
Hamiltonian Cycle Detection: The program can detect if no Hamiltonian cycle exists in the graph, outputting an appropriate message.
Tour Printing: After computing the optimal tour, the solution prints the sequence of vertices in the tour along with the total cost.
Execution Time Measurement: The program measures and outputs the time taken to compute the solution.

