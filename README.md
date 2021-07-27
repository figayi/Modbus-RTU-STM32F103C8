# Modbus_RTU_STM32F103C8
This is an implementation of modbus protocol in serial communication using STM32F103C8 microcontroller.

* The idea of this project is the implementation of modbus protocol in industrial serial communication (RS485) using 
    microcontrollers of the manufacturer STMicroelectronics (STM32F103C8). 
  
* The library is used to implement both units, slave and master. 

* In the main directory we have:
  - The library used for implementation of modbus protocol (this is the last version and is copied from ModbusMaster project).
  - The STM32 project where the unit is configured as a slave (ModbusSlave).
  - The STM32 project where the unit is configured as a master (ModbusMaster).
  
 * Issues:
    - In the library are implemented four function codes: read coils (1), read registers (3), write multiple coils (15) and write multiple registers(16).
    - Implementation using the library of modbus slave unit works just fine.
    - Implementation of modbus master using the library is not yet complited:
        a) It is a problem with the implementation of the write multiple coils implemented from the master.
        b) The response timeout of the master is not implemented (work to be complited).
        
  * Implementation of the slave:
    - Configure one UART module, two timers and two ports as digital outputs.
    - Declare a variable of the type structure MBHandler and two arrays, one of the type uint8_t and the other 
      type of uint16_t to represent the modbus data model of the coils and registers.
    - Call InitMBSlave function and then StartMBSlave.
    - Implement callback functions of the UART and TIMER module.
      (at this time the unit can be seen as modbus slave unit)
      
   * Implementation of the master:
     - Configure one UART module, two timers and two ports as digital outputs.
     - Declare a variable of the type structure MBHandler.
    - Call InitMBMaster function.
    - Implement callback functions of the UART and TIMER module.
      (at this time the unit can be seen as modbus master unit and by calling functions in the 
      library you can read or write data in slave unit)
        
