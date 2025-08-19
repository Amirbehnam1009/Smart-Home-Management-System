# Smart Home Management System  
**Final Project for Logic Circuits Course**  
**Fall 2020**  

![Smart Home Management System](https://via.placeholder.com/800x400?text=Smart+Home+Management+System)   

## 📌 Overview  
This repository contains the design and implementation of a **Smart Home Management System** developed as part of the **Logic Circuits** course. The system integrates multiple hardware modules to simulate a smart home environment, including temperature control, gas detection, lighting automation, and more. All components are designed using digital logic principles.

🔗 **GitHub Repository:** [https://github.com/Amirbehnam1009/Smart-Home-Management-System](https://github.com/Amirbehnam1009/Smart-Home-Management-System)  

---

## 🛠️ Modules  

### 1. **Temperature Sensor**  
   - **8x8 Multiplier**: Hardware-optimized multiplier for processing sensor data  
   - **16x16 Multiplier**: Extended precision multiplier for high-accuracy calculations  
   - **Adder/Subtractor**: Arithmetic unit for adjusting temperature thresholds  

### 2. **Gas Sensor**  
   - **Moore Machine**: Finite state machine (FSM) to detect hazardous gas levels and trigger alerts  

### 3. **Cooling & Heating System**  
   - **Fan Speed Controller**: Dynamically adjusts fan RPM based on temperature inputs  
   - **Power & Mode Selector**: Supports manual/auto modes and power-saving features  

### 4. **Lighting System**  
   - **Decoder Design**: Converts control signals to actuator outputs for LED/light control  

### 5. **Lighting Dance (Entertainment Mode)**  
   - **Random Number Generator**: Creates pseudo-random sequences for dynamic light patterns  
   - **Multiplexer-Based Flip-Flop Inputs**: Selects between preset or random lighting modes  

### 6. **Memory Unit**  
   - **Register File**: Stores system states (e.g., temperature settings, gas thresholds)  

### 7. **Control Unit**  
   - **Central Controller**: Coordinates all modules using a predefined state machine  

### 8. **Top-Level Integration**  
   - **Smart Home Management System**: Integrates all modules into a unified system  

---

## 🚀 Key Features  
- Real-time sensor processing (temperature, gas)  
- Energy-efficient control (adaptive fan speed, lighting automation)  
- Modular design for easy scalability  
- Entertainment mode with dynamic lighting effects  

---

## 🔧 Technologies & Tools  
- **HDL**: Verilog
- **Simulation**: ModelSim/QuestaSim *(if applicable)*  
- **Synthesis**: Xilinx ISE
- **Target Board**: FPGA (e.g., Basys3, DE10-Lite) *(if applicable)*  

---

## 📂 Repository Structure  
Smart-Home-Management-System/
├── Temperature_Sensor/ # Multipliers, adder/subtractor
├── Gas_Sensor/ # Moore machine implementation
├── Cooling_Heating/ # Fan speed and mode control
├── Lighting/ # Decoder and dance mode
├── Memory/ # Register file
├── Control_Unit/ # FSM and top-level control
└── Integration/ # Full system integration

## 📝 Usage  
### Simulation  
```bash
# Example command to run simulation (adjust as needed)
vsim -do run_simulation.tcl
```
### Synthesis
Load the top-level module (Smart_Home_System.v) into your FPGA toolchain.
