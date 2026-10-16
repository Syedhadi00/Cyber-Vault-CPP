# Cyber_Vault
- 🔒 **Caesar Cipher** — Basic text encryption and decryption tool

  
# 🔐 Cyber Vault — C++

**A Simple Account Management System Built with C++**

Cyber Vault is a beginner-friendly C++ console application that allows users to manage their website account details using file handling and object-oriented programming.

The project is designed for educational purposes to practice core C++ concepts through a practical project.

## ✨ Features

- ➕ **Add Account:** Save website name, username, and password.
- 📋 **View Accounts:** Display all saved account details.
- 🔎 **Search Account:** Find an account using its username.
- 🗑️ **Delete Account:** Delete account details using the website name, with confirmation.
- 💾 **File Handling:** Store account details in a local text file.
- 🔁 **Persistent Storage:** Keep saved data between program runs.
- 🧭 **Menu-Based Interface:** Navigate through the program using simple numbered options.

## 🛠️ Technologies Used

- **Language:** C++
- **Libraries:** `iostream`, `fstream`, `cstdio`
- **Concepts:** Classes, constructors, functions, conditional statements, loops, file handling, and basic object-oriented programming.

## 📂 Project Structure

```text
Cyber-Vault-CPP/
│
├── main.cpp
├── info.txt       # Created when accounts are saved
├── temp.txt       # Temporary file used during deletion
└── README.md
```

*Note: `info.txt` and `temp.txt` are created or used by the program during execution. You do not need to create them manually.*

## ⚙️ Installation and Setup

### 1. Clone the Repository

```bash
git clone https://github.com/Syedhadi00/Cyber-Vault-CPP.git
```

### 2. Open the Project Folder

```bash
cd Cyber-Vault-CPP
```

### 3. Compile the Program

Make sure a C++ compiler, such as GCC, is installed.

```bash
g++ main.cpp -o cyber-vault
```

### 4. Run the Program

**Windows:**

```bash
cyber-vault.exe
```

**Linux:**

```bash
./cyber-vault
```

## 🚀 How to Use

After launching the program, select an option from the main menu:

| Option | Action         |
| ------ | -------------- |
| 1      | Add Account    |
| 2      | View Accounts  |
| 3      | Search Account |
| 4      | Delete Account |
| 5      | Exit           |

### Adding an Account

1. Select option `1`.
2. Enter the website name.
3. Enter the username.
4. Enter the password.
5. The details are saved to `info.txt`.

### Viewing Accounts

Select option `2` to display the saved account details.

### Searching for an Account

1. Select option `3`.
2. Enter the account username.
3. The program displays the matching account if found.

### Deleting an Account

1. Select option `4`.
2. Enter the website name.
3. Confirm the deletion by entering `y` or `Y`.
4. The program rewrites the remaining records using a temporary file.

**Important:** If multiple records use the same website name, the current implementation deletes all matching records.

### Exiting the Program

Select option `5` to exit Cyber Vault.

## 📚 What I Learned

Through this project, I practiced:

- Applying classes and constructors in C++.
- Using functions to organize program logic.
- Reading and writing files with `ifstream` and `ofstream`.
- Appending records to a file.
- Searching records using conditional statements.
- Deleting records using temporary files and file renaming.
- Building a menu-driven console application.

## 🔒 Security Disclaimer

**Cyber Vault is an educational project, not a production-ready password manager.**

- Passwords are stored in plain text and are not encrypted.
- Anyone with access to the data file may read the saved credentials.
- Do not store real passwords, sensitive information, or important account credentials in this application.

A future version could include encryption, stronger input validation, and improved file-handling error checks.

## 🔮 Future Improvements

- [ ] Encrypt stored passwords.
- [ ] Add password masking during input.
- [ ] Improve input validation and error handling.
- [ ] Allow users to update existing accounts.
- [ ] Add duplicate-account detection.
- [ ] Improve the interface and account management options.

## 👨‍💻 Author

**Syed Abdul Hadi**

C++ Programmer | Cybersecurity Learner

GitHub: [Syedhadi00](https://github.com/Syedhadi00)

---

⭐ If you find this project useful for learning C++, feel free to star the repository!
