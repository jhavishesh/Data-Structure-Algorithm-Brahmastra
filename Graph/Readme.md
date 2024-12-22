# Graph Algorithms Cheatsheet

This cheatsheet provides quick, easy-to-remember logic for common graph algorithms.

## 0. **Print Adjacency list**

[Learn More](https://www.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1)

<img width="1463" alt="image" src="https://github.com/user-attachments/assets/e860925c-7b9f-4229-abdf-ae870da9667c" />


## 1. **Depth First Search (DFS)**
**Core Logic**: Explore as deep as possible from the starting point. Once you can't go deeper, backtrack and explore other paths.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[Learn More](https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1)

![DFS](https://github.com/user-attachments/assets/d2e939a7-57d4-4556-81c4-2044e22db67d)

---

## 2. **Breadth First Search (BFS)**
**Core Logic**: Start at the root and explore all neighbors first, then move on to their neighbors. Use a queue to manage nodes.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[Learn More](https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1)

![BFS](https://github.com/user-attachments/assets/feeea9a6-e664-47ce-a49c-734a641944c8)

---

## 3. **Detect Cycle in Undirected Graph**
**Core Logic**: During DFS, if a node has already been visited and isn’t the parent, a cycle is detected.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[Learn More](https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1)

![Cycle in Undirected Graph](https://github.com/user-attachments/assets/c842eed8-a9d4-4dbd-9b4a-2c30e2c94a4e)

---

## 4. **Detect Cycle in Directed Graph**
**Core Logic**: Track nodes in the current DFS path. If a node reappears in the same path, there's a cycle.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[Learn More](https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1)

![Cycle in Directed Graph](https://github.com/user-attachments/assets/bc3d0e19-84c5-4b8e-95e1-21fb240f86cd)

---

## 5. **Topological Sort**
**Core Logic**: Perform DFS and keep nodes in a stack. The reverse of the stack gives the order to process nodes.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[Learn More](https://www.geeksforgeeks.org/problems/topological-sort/1)


![Topological Sort](https://github.com/user-attachments/assets/df7219c3-b758-4dc5-bc40-7634e87812e1)

---

## 6. **Clone Graph**
**Core Logic**: Create a new node for each visited node and copy over its edges. Ensure to avoid re-visiting nodes.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[Learn More](https://leetcode.com/problems/clone-graph/)

![Clone Graph](https://github.com/user-attachments/assets/53d1a2b1-f0a7-45eb-96c8-e15bb1c69c69)

---

## 7. **Is Graph Bipartite**
**Core Logic**: Try to color the graph with two colors. If two connected nodes have the same color, the graph isn’t bipartite.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[Learn More](https://leetcode.com/problems/is-graph-bipartite/)

![Is Graph Bipartite](https://github.com/user-attachments/assets/1c2442cc-f107-46be-b90f-468834255500)

---

## 8. **Number of Provinces**
**Core Logic**: Count the connected components in an undirected graph using DFS/BFS.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[Learn More](https://leetcode.com/problems/number-of-provinces/)

![Number of Provinces](https://github.com/user-attachments/assets/94faed3b-2d9f-47a5-916d-458eff6e0a15)

---

## 9. **Number of Islands**
**Core Logic**: Each island is a connected component. Use DFS/BFS to count these components on a grid.
- **Time Complexity**: O(M * N) (M = rows, N = columns)
- **Space Complexity**: O(M * N)

[Learn More](https://leetcode.com/problems/number-of-islands/)

![Number of Islands](https://github.com/user-attachments/assets/07763d7d-17da-4d26-b9d7-01f1248b9b7e)

---

## 10. **Flood Fill**
**Core Logic**: Starting from a pixel, change the color of all connected pixels to the new color using DFS/BFS.
- **Time Complexity**: O(M * N)
- **Space Complexity**: O(M * N)

[Learn More](https://leetcode.com/problems/flood-fill/)

![Flood Fill](https://github.com/user-attachments/assets/a3c10c6d-61de-4faf-a4b0-eef7fea26edf)

---

## 11. **Prim's Algorithm (Minimum Spanning Tree)**
**Core Logic**: Start with any node, and keep adding the nearest node to the growing MST, ensuring no cycles.
- **Time Complexity**: O(V^2) with adjacency matrix, O(E log V) with adjacency list
- **Space Complexity**: O(V)

[Learn More](https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1)

![Prim's Algorithm](https://github.com/user-attachments/assets/589041b1-d5e5-42e6-858a-b562ca688e80)

---

## 12. **Dijkstra's Algorithm**
**Core Logic**: Find the shortest path from a source node to all other nodes by always picking the closest node.
- **Time Complexity**: O(V^2) with adjacency matrix, O(E log V) with adjacency list
- **Space Complexity**: O(V)

[Learn More](https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1)

![Dijkstra's Algorithm](https://github.com/user-attachments/assets/3bee637e-f8db-40cd-96f8-c17fb6d719c6)

---

## 13. **Course Schedule (Kahn's Algorithm)**
**Core Logic**: Process courses with no prerequisites first, then remove them from the graph and repeat.
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)

[Learn More](https://leetcode.com/problems/course-schedule/)

![Course Schedule](https://github.com/user-attachments/assets/62eb8cac-7d04-4029-9c01-5a0d17c561fb)

---
