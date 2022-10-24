# shovon
project 1
Breadth-First Traversal (or Search) for a graph is similar to Breadth-First Traversal of a tree (See method 2 of this post). 

The only catch here is, that, unlike trees, graphs may contain cycles, so we may come to the same node again. 
To avoid processing a node more than once, we divide the vertices into two categories:

Visited and
Not visited.

A boolean visited array is used to mark the visited vertices. For simplicity, it is assumed that all vertices are reachable from the starting vertex. 
BFS uses a queue data structure for traversal.
