# 🏥 Hospital Queue Management System

A robust, Object-Oriented **Hospital Queue Management** application built with **C++**. This system simulates a real-world clinic waiting room where patients are processed based on the **FIFO (First-In-First-Out)** principle, with an integrated **Priority Logic** for urgent medical cases.

---

## 📺 Video Demonstration

Watch the system in action, featuring the custom validation logic and priority queuing:

[![Hospital Queue System Demo](https://img.youtube.com/vi/YOUR_VIDEO_ID/0.jpg)](https://www.youtube.com/watch?v=YOUR_VIDEO_ID)
> *Click the image above to watch the project walkthrough on YouTube.*

---

## 🚀 Key Features

* **Smart Priority Queuing:** Automatically moves "Urgent" cases to the front of the line while maintaining a regular queue for standard check-ups.
* **Template-Based Validation:** A custom `clsInputValidate` class built using **C++ Templates** to handle type-safe inputs for any numeric data type.
* **Regex Time Validation:** Uses **Regular Expressions** to ensure arrival times strictly follow the `HH:MM AM/PM` format.
* **Modular Architecture:** Strictly follows OOP principles, separating the Data Structure (Queue), Business Logic (Hospital System), and UI (Menu).
* **Crash-Proof UI:** Professional error handling that prevents the console from crashing on invalid user inputs.

---

## 🛠️ Tech Stack

* **Language:** C++17
* **Data Structures:** Custom Template Queue (Vector-based)
* **Libraries:** `<regex>`, `<vector>`, `<limits>`, `<string>`
* **Development Environment:** Visual Studio 2022

---

## 📂 Project Structure

| File | Description |
| :--- | :--- |
| `clsQueue.h` | A generic, template-based Queue implementation. |
| `clsPatient.h` | Defines the Patient object and priority status. |
| `clsHospitalSystem.h` | Manages the logic between regular and urgent queues. |
| `clsInputValidate.h` | A utility library for secure input and Regex validation. |
| `ShowMainMenu.h` | The interactive console interface and navigation logic. |
| `Global.h` | Holds global instances to maintain system state. |

---

## ⚙️ How to Run
1.  **Clone the repository:**
    ```bash
    git clone https://github.com/Alaa-z17/hospital-queue-cpp.git
    ```
2.  Open the `.sln` file in **Visual Studio**.
3.  Build the solution in **Release** mode.
4.  Run the `.exe` from the `/Release` folder.

---

## 📜 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

---

## 👨‍💻 About the Author

This is the **2nd project** in my **"7 Professional C++ Projects"** series. My goal is to master Data Structures and clean code architecture.

**Connect with me:**

* **GitHub:** [@Alaa-z17](https://github.com/Alaa-z17)
* **LinkedIn:** [www.linkedin.com/in/alaa-alkatshah-65339620b]