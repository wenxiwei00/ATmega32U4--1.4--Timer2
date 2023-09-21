# ATmega32U4--1.4--Timer2
用Timer来控制LED的duty cycle
####  电路图  
![695225563352722851](https://github.com/wenxiwei00/ATmega32U4--1.4--Timer2/assets/114196821/adbdb2fa-d7a5-402b-97ab-48bd1e391e8f)  
注意这里一定要用PC6口才可以，因为我的代码里面用到了OCR3A寄存器，只有PC6与OCR3A关联  
<img width="474" alt="40b7affe50dca9e6497f2fd98db97e3" src="https://github.com/wenxiwei00/ATmega32U4--1.4--Timer2/assets/114196821/13a6e06d-37fe-4839-b3e1-d59b9d8f8c29">
####  最终效果  
通过调整main.c里面的变量percentage，可以改变duty cycle，从而可以控制LED的亮暗程度


