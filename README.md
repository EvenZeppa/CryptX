# 🔐 Cipher Program - Caesar & Vigenere Cipher in C

## 📌 Description
This project is a simple encryption and decryption tool written in **C**. It supports two classical cipher algorithms:

- **Caesar Cipher**
- **Vigenere Cipher**

The program allows you to encrypt or decrypt text using these methods by providing specific command-line arguments.

---

## 🔑 Cipher Algorithms

### 🏰 Caesar Cipher
A substitution cipher that shifts each letter in the plaintext by a fixed number of positions in the alphabet.

- **Encryption:** Each letter is shifted by a fixed number of positions (gap).
- **Decryption:** Brute-force approach showing all possible shifts (gap from 1 to 25).

### 💜 Vigenere Cipher
A polyalphabetic cipher using a keyword to determine the shift for each character.

- **Encryption:** Each character is shifted according to the position of the corresponding character in the keyword.
- **Decryption:** Reverses the shift based on the keyword.

---

## 🎮 Features

- 🔄 **Caesar Cipher:** Encryption and brute-force decryption.
- 🔑 **Vigenere Cipher:** Encryption and decryption using a keyword.
- 💜 **Custom text input:** Pass text as a command-line argument.
- 🧪 **Error handling:** Handles invalid input and memory allocation failures.

---

## 🛠 Compilation and Execution

### 🔧 **Compilation**
```sh
make
```

### ▶️ **Execution**
```sh
./cipher [options]
```

### 📝 **Options:**
| Flag    | Description                                    |
|---------|------------------------------------------------|
| -tTEXT  | Text to be encrypted/decrypted                  |
| -kKEY   | Keyword for Vigenere cipher                     |
| -gNUM   | Gap number for Caesar cipher                    |
| -C      | Use Caesar cipher                               |
| -V      | Use Vigenere cipher                             |
| -c      | Encrypt text                                    |
| -d      | Decrypt text                                    |

### 🔄 **Examples:**

#### Caesar Cipher Encryption:
```sh
./cipher -tHELLO -g3 -C -c
```

#### Caesar Cipher Brute-force Decryption:
```sh
./cipher -tKHOOR -C -d
```

#### Vigenere Cipher Encryption:
```sh
./cipher -tHELLO -kKEY -V -c
```

#### Vigenere Cipher Decryption:
```sh
./cipher -tRIJVS -kKEY -V -d
```

---

## 💂‍💻 Project Structure
```
CryptX/
├── .vscode/
├── includes/
│   └── utils.h
├── srcs/
│   └── utils/
│       ├── ft_atoi.c
│       ├── ft_isalpha.c
│       ├── ft_isdigit.c
│       ├── ft_memcmp.c
│       ├── ft_memcpy.c
│       ├── ft_putstr.c
│       ├── ft_strlen.c
│       └── ft_tolower.c
│   ├── cesar.c
│   ├── main.c
│   └── vigenere.c
├── .gitignore
├── cryptx
├── Makefile
└── README.md
```

---

## 💜 Author
- **vbonnard** (<vbonnard@student.42.fr>)
- **ezeppa**   (<ezeppa@student.42.fr>)


---

## 📌 Note
This project was developed as part of **42 School**. Feel free to contribute or report any issues you encounter! 🚀

