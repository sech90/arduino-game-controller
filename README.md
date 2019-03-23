
# arduino-game-controller
Thanks to **[gamelasster](https://github.com/gamelaster)** and his awesome library **[ArduinoGamepad](https://github.com/gamelaster/ArduinoGamepad)** for making this project possible.

 - Find the script ***SimpleGameController.ino*** inside the folder ***SimpleGameController***
 - Connect your Arduino via USB and upload the script.
 - Connect one or more switches like in the picture below (taken from [https://www.arduino.cc/en/Tutorial/InputPullupSerial](https://www.arduino.cc/en/Tutorial/InputPullupSerial))
 - Your Arduino will be recognized as a generic gamepad by your operating system. On Windows, you can see how buttons are responding by going to *Control Panel* and searching for *Set up USB game controllers*. If everything is fine, you should see an entry in the gamepad lists with the name of your Arduino board. Click on **Properties**. Now if you press somme button you should see some of the circled numbers lighting up.

![Arduino switch connection](https://www.arduino.cc/en/uploads/Tutorial/inputPullupButton.png)
