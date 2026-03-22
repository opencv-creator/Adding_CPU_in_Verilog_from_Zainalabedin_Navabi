CREDITS OF THIS VERILOG CODE GOES TO THE GREAT BOOK and its Author (Verilog digital system design by Zainalabdein Navabi)
---------------------------------------------------------------------------------------------------------------------------
this code is compiled in Xilinx 10.1 ISE and will also work in latest Xilinx Vivado Version.
Xilinx 10.1 ISE works perfectly in Windows 10 and Xilinx 14.7 works in Windows 11 with some minor 
Tweaks during installation and those tweaks required for xilixn 14.7 instllation on windows 11 
are available in Youtube.

************************ Caution *************************************

Verilog Testbench contains the RAM which supplies the data to the Adding CPU through an 16 location Array . i didnt include a seperate RAM (memory ) module
inside the Adding CPU because including a seperate RAM (memory) module inside the Adding_CPU has created significant delay in the CPU exceution and thus making CPU 
to skip some input instructions supplied for execution.

**********************************************************************

Exceution Output Explained
------------------------------------------------------------------------------------------------------------------------------
Instructions inside the data_array are executed by the Adding_CPU

data_array[0] = 8'b0000_1111;

data_array[1] = 8'b1100_0001;

data_array[2] = 8'b0100_1000;

data_array[3] = 8'b0000_0011;

data_array[4] = 8'b0000_0101;

data_array[5] = 8'b0000_0100;

data_array[6] = 8'b1100_0100;

data_array[7] = 8'b0100_1101;

data_array[8] = 8'b1100_0100;

data_array[9] = 8'b0100_1111;

data_array[10] = 8'b0000_0100;

data_array[11] = 8'b1100_0100;

data_array[12] = 8'b0100_1111;

data_array[13] = 8'b1100_0100;

data_array[14] = 8'b0100_0101;

data_array[15] = 8'b0000_1010;

------------------------------------------------------------------------------------------------------------------------------

first instruction is Load AC --> 8'b00_00_1111 , that means load AC (Accumulator) with value at Address 1111 (value present at address 15) , now the value at location 15 is 0000_1010 is loaded into AC (Acumulator).

second instruction is Add immedaite ---> 8'b1100_0001 , that means add the value inside Accumulator (i.e 0000_1010) ,now this value is added to the 0001 present in this second instruction.

third instruction is Store AC ---> 8'b0100_1000 , that means store the value in Accumulator (i.e 1011 ) is stored in the 1000 address mentioned in this third instruction.

------------------------------------------------------------------------------------------------------------------------------
time =                    0,op_code = xx, r=0 ,addr=  z, w =0, data_bus = zzzzzzzz

time =                40000,op_code = xx, r=1 ,addr=  0, w =0, data_bus = zzzzzzzz

time =                42000,op_code = xx, r=1 ,addr=  0, w =0, data_bus = 00001111

time =                60000,op_code = 00, r=0 ,addr=  z, w =0, data_bus = zzzzzzzz

time =                80000,op_code = 00, r=1 ,addr= 15, w =0, data_bus = zzzzzzzz

time =                82000,op_code = 00, r=1 ,addr= 15, w =0, data_bus = 00001010

time =               100000,op_code = 00, r=1 ,addr=  1, w =0, data_bus = zzzzzzzz

time =               102000,op_code = 00, r=1 ,addr=  1, w =0, data_bus = 11000001

time =               120000,op_code = 11, r=0 ,addr=  z, w =0, data_bus = zzzzzzzz

time =               160000,op_code = 11, r=1 ,addr=  2, w =0, data_bus = zzzzzzzz

time =               162000,op_code = 11, r=1 ,addr=  2, w =0, data_bus = 01001000

time =               180000,op_code = 01, r=0 ,addr=  z, w =0, data_bus = zzzzzzzz

time =               200000,op_code = 01, r=0 ,addr=  8, w =1, data_bus = 00001011       &nbsp;&nbsp;&nbsp;&nbsp;        ------->>>>>>>> here 1011 is stored at the address 8.

time =               220000,op_code = 01, r=1 ,addr=  3, w =0, data_bus = zzzzzzzz
