# Stack and Queue with Max (C++)

Implementation of a stack and a queue data structure that support constant-time maximum value queries. Developed as part of the “Estructuras de Datos” (ED) course at the University of Granada.

## 📦 Features

- `MaxStack`: a custom stack that supports retrieving the maximum value in O(1)
- `MaxQueue`: a custom queue with the same property
- Efficient use of auxiliary structures (e.g. secondary stacks)
- Modular and reusable C++ code

## 🛠️ Technologies
- C++
- Standard Template Library (STL)
- Terminal-based execution and testing

## ▶️ How to Run
  ```bash
# <args> represents the integers you want in the stack or queue. If it is an integer, it is pushed to the strucuture, if it is a dot '.', it pops the corresponding element of the structure.
  ./cmake-build-debug/bin/pila_max <args>
  ./cmake-build-debug/bin/cola_max <args>
  ```

## 🧪 Example usage
  ```bash
  ./cmake-build-debug/bin/pila_max 1 2 . 3 4 . . .
  # Should give:
  #  2,2
  #  4,4
  #  3,3
  #  1,1
  ./cmake-build-debug/bin/cola_max 1 2 . 3 4 . . .
  # Should give:
  #  1,2
  #  2,4
  #  3,4
  #  4,4
```

## 🎓 Academic Context
This project was created during the 2024/25 academic year as part of the “Data Structures” course in the Double Bachelor's Degree in Computer Engineering and Mathematics at UGR.

## 📜 License
Provided for academic and personal portfolio use.
Contact: javier.ortmol@gmail.com
