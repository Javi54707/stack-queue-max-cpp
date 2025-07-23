# Stack and Queue with Max (C++)

Implementation of a stack and a queue data structure that support constant-time maximum value queries. Developed as part of the “Estructuras de Datos” (ED) course at the University of Granada.

## 📦 Features

- `MaxStack`: a custom stack that supports retrieving the maximum value in O(1)
- `MaxQueue`: a custom queue with the same property
- Efficient use of auxiliary structures (e.g. secondary stacks)
- Modular and reusable C++ code

## 🧪 Example usage

```cpp
MaxStack s;
s.push(10);
s.push(5);
s.push(20);
std::cout << s.max() << std::endl; // Outputs: 20
```

## 🛠️ Technologies
- C++
- Standard Template Library (STL)
- Terminal-based execution and testing

## ▶️ How to Compile
```bash
Copiar
Editar
g++ -std=c++11 -o max_structures src/*.cpp
./max_structures
```

## 📚 Academic Context
This project was created during the 2024/25 academic year as part of the “Data Structures” course in the Double Bachelor's Degree in Computer Engineering and Mathematics at UGR.

## 📜 License
Provided for academic and personal portfolio use.
Contact: javier.ortmol@gmail.com
