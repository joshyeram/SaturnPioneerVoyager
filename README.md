# Saturn with Pioneer and Voyager

link to the build video: https://www.youtube.com/watch?v=A1N8exJrTmQ

# Saturn
![pioneer](https://i.imgur.com/nuBAdwu.jpg)
With this keyboard, I wanted to experiment with the possibility of hot-swappable keyboards. In the current state of using machine sockets and pins, no one dares to hot-swap. And I wanted to fix that and come up with a universal microcontroller daughter board that you can simply swap around.

# Pioneer
![pioneer](https://i.imgur.com/xRaUzw1.jpg)
Pioneer is a simple daughterboard that supports a pro-micro-like microcontroller and a simple switch (reset). You can use qmk to program it.

# Voyager
![voyager](https://i.imgur.com/eZRtOx9.jpg)
Voyager is a complicated daughterboard that supports a pro-micro-like microcontroller, either oled or nice!view, a battery, and two switches (reset and power). Because of this, it is very thick to support all the hardware. In this case, I decided to use a Supermini for cost reasons. However, a genuine nice!nano should work as well. For programming, zmk was used for Bluetooth. 

# pcb
![pcb](https://i.imgur.com/IOk0xZr.jpg)
All you need is one pcb for all the boards. This is because I designed the daughter boards to be in the corners of the board to save manufacturing costs. This is at the cost of needing to score and snap off each board.
![pcb](https://i.imgur.com/F1MUYgN.jpg)
![pcb](https://i.imgur.com/mCTm1j5.jpg)
The reason why this works is because all the connections are standardized
![pcb](https://i.imgur.com/Bw5ACVp.png)

# parts
The most important part of the whole build was the DB25 connectors. I had to edit the existing DB25 footprint to fit my DB25 pins. So, you might have to as well.
