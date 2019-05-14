# 喇叭模块 #

<img src="https://raw.githubusercontent.com/YFROBOT-TM/YFRobot-Sensor-Module/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/pic/Speaker.jpg" alt="Speaker" width="300" div align=right />

## 产品简介 ##
喇叭模块，采用高保真功放芯片[LM4871](https://github.com/YFROBOT-TM/YFRobot-Sensor-Module/blob/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/ref/LM4871_datasheet_EN.pdf)制作，保证音质输出；拨盘式电位器，轻松调节音量大小；宽电压范围：3V - 5.5V ；PH2.0 3P接线端子，配合专用3P杜邦线，使用非常方便，赶紧加入你的项目吧。
可配合[语音模块](http://www.yfrobot.com/wiki/index.php?title=%E8%AF%AD%E9%9F%B3%E6%A8%A1%E5%9D%97)的DAC模式使用！！

提示：[无源蜂鸣器](http://www.yfrobot.com/wiki/index.php?title=%E6%97%A0%E6%BA%90%E8%9C%82%E9%B8%A3%E5%99%A8)虽然也能实现唱歌发声功能，但音质和喇叭模块不能比的！


## 规格参数 ##
- 供电电压：DC3 - 5V
- 安装孔径：3MM
- 模块重量：5g
- 模块尺寸图：
<img src="https://raw.githubusercontent.com/YFROBOT-TM/YFRobot-Sensor-Module/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/pic/Speaker_size.jpg" alt="Speaker_size" height="220" />


## 主要应用 ##
时钟、天气语音播报、播放歌曲等


## 引脚说明 ##
* G  --  Gnd(地)
* V  --  Vcc(电源+5V)
* S  --  Sign(信号)


## 应用示例 ##
**电路示意图**

<img src="https://raw.githubusercontent.com/YFROBOT-TM/YFRobot-Sensor-Module/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/pic/Speaker_circuit.png" alt="Speaker_circuit" height="250" />


**示例代码**
<pre >
//Speaker test
//simulate the ambulance voice by speaker

int speakerPin = 6; //set speaker pin

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  unsigned char i, j;
  while (1)
  {
    for (i = 0; i < 80; i++) //make frequency of a sound
    {
      digitalWrite(speakerPin, HIGH);
      delay(1);
      digitalWrite(speakerPin, LOW);
      delay(1);
    }
    for (i = 0; i < 100; i++) //make another frequency of a sound
    {
      digitalWrite(speakerPin, HIGH);
      delay(2);
      digitalWrite(speakerPin, LOW);
      delay(2);
    }
  }
}
</pre>

程序下载地址：[Speaker_test](https://github.com/YFROBOT-TM/YFRobot-Sensor-Module/blob/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/program/Speaker_test/Speaker_test.ino) / 
[Speaker_test-Yun.baidu](https://eyun.baidu.com/s/3kVGDZUn)

程序运行结果：给两种不同频率，使其发出两种声音，模拟救护车声音。


**扩展程序**

再给大家两个参考程序及DIY教程

* 超级玛丽音乐：[Super_Mario](https://github.com/YFROBOT-TM/YFRobot-Sensor-Module/tree/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/program/Super_Mario) / [Super_Mario-Yun.baidu](https://eyun.baidu.com/s/3jIIHRP8)
* 唱歌：[singSong](https://github.com/YFROBOT-TM/YFRobot-Sensor-Module/tree/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/program/singSong) / [singSong-Yun.baidu](https://eyun.baidu.com/s/3o8UKVH4)
* 唱歌DIY程序教程：[DIY Sing](http://www.yfrobot.com/thread-2269-1-1.html)


## 参考资料 ##

* [LM4871数据手册](https://github.com/YFROBOT-TM/YFRobot-Sensor-Module/blob/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/ref/LM4871%E6%95%B0%E6%8D%AE%E6%89%8B%E5%86%8C.pdf) / [LM4871数据手册-YFRobot](http://wiki.yfrobot.com/datasheet/LM4871%E6%95%B0%E6%8D%AE%E6%89%8B%E5%86%8C.pdf)
* [LM4871_datasheet_EN](https://github.com/YFROBOT-TM/YFRobot-Sensor-Module/blob/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/ref/LM4871_datasheet_EN.pdf) / [LM4871_datasheet_EN-YFRobot](http://wiki.yfrobot.com/datasheet/LM4871_datasheet_EN.pdf)
* [Speaker 模块原理图](https://github.com/YFROBOT-TM/YFRobot-Sensor-Module/blob/master/Speaker-%E5%96%87%E5%8F%AD%E6%A8%A1%E5%9D%97/ref/speaker_sch.pdf) / [Speaker 模块原理图-YFRobot](http://wiki.yfrobot.com/Speaker/speaker_sch.pdf)
