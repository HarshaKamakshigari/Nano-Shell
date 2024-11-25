# Nano-Shell
Here’s an improved version of your README:  

## Overview
The **Custom Linux Shell** is a lightweight, educational project that replicates the basic functionalities of a Linux shell. It allows users to execute commands, navigate directories, and perform essential shell operations, offering insights into the internal workings of shells.

---

## Features
- **Command Parsing**: Efficiently processes and splits user input into commands and arguments.
- **Command Execution**: Supports core Linux commands like `ls`, `cd`, and `mkdir`.
- **Directory Navigation**: Allows users to change the current working directory with `cd`.
- **Shell Termination**: Gracefully exits the shell using the `exit` command.
- **Error Handling**: Provides feedback for invalid commands or operations.

---

## Technologies Used
- **Language**: C
- **System Calls**: Utilizes `fork()`, `exec()`, `wait()`, and other UNIX system calls for process management and command execution.

---

## Getting Started

### Prerequisites
- A Linux environment (e.g., Ubuntu, Fedora).
- GCC (GNU Compiler Collection). Install it with:
  ```bash
  sudo apt update
  sudo apt install build-essential
  ```

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/HarshaKamakshigari/custom_linux_shell.git
   cd custom_linux_shell
   ```
2. Compile the shell:
   ```bash
   gcc custom_shell.c -o custom_shell
   ```

### Usage
1. Run the shell:
   ```bash
   ./custom_shell
   ```
2. Enter commands as you would in any shell:
   - List files: `ls`
   - Change directory: `cd <directory>`
   - Create a folder: `mkdir <folder_name>`
   - Exit the shell: `exit`

### Example Commands
```bash
custom_shell> ls
custom_shell> cd Documents
custom_shell> mkdir test_folder
custom_shell> exit
```

---

## Future Enhancements
- **I/O Redirection**: Add support for `>` and `<`.
- **Background Processes**: Enable commands to run in the background using `&`.
- **Pipelines**: Implement pipelines for commands using `|`.
- **Tab Completion**: Add autocompletion for commands and paths.
- **Error Logging**: Improve error feedback for debugging.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---

## Author
**Harsha Kamakshigari**  , ** T.Hanisha sai** ,**Vishnu sai priya** ,**Varshitha Tummala**
Connect on [Harsha](https://github.com/HarshaKamakshigari).
Connect on [Vishnu Sai Priya](https://github.com/vishnusaipriya7).
Connect on [Hanisha Sai](https://github.com/hani-sai).
Connect on [Varshitha](https://github.com/varshithatummala9).

---

## Acknowledgments
- Inspired by the principles of operating system design and medium blogs.
```  

This version improves formatting, clarity, and structure for a polished and professional presentation.
