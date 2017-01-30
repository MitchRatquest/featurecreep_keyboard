int keyboardUS[14][9] = //rows 0-13, columns 14-22
{ // 0               1                2                  3                4              5                  6                7              8
  {0,              0,               KEY_EQUAL,         KEY_BACKSPACE,   KEY_9,         KEY_O,             KEY_L,           KEY_PERIOD,    MODIFIERKEY_LEFT_CTRL},  //0
  {0,              0,               KEY_PAUSE,         KEY_UP,          KEY_MINUS,     KEY_SCROLL_LOCK,   0,               KEY_DELETE,    MODIFIERKEY_LEFT_GUI },  //1
  {KEY_4,          KEY_R,           KEY_F,             KEY_V,           KEYPAD_1,      KEYPAD_4,          KEYPAD_7,        KEY_NUM_LOCK,  MODIFIERKEY_RIGHT_CTRL},  //2
  {0,              0,               KEY_END,           0,               KEY_PAGE_DOWN, KEY_HOME,          KEY_INSERT,      KEY_PAGE_UP,   MODIFIERKEY_RIGHT_GUI },  //3 
  {KEY_3,          KEY_E,           KEY_D,             KEY_C,           KEYPAD_2,      KEYPAD_5,          KEYPAD_8,        KEYPAD_SLASH,  0               },  //4
  {KEY_2,          KEY_W,           KEY_S,             KEY_X,           KEYPAD_3,      KEYPAD_6,          KEYPAD_9,        KEYPAD_ASTERIX,0               },  //5
  {KEY_RIGHT_BRACE,KEY_LEFT_BRACE,  0,                 KEY_BACKSLASH,   KEY_0,         KEY_P,             KEY_SEMICOLON,   KEY_SLASH,     0               },  //6
  {0,              0,               MODIFIERKEY_RIGHT_SHIFT, KEY_QUOTE,       KEY_ENTER,     MODIFIERKEY_LEFT_SHIFT, 0,               KEYPAD_ENTER,  0               },  //7
  {0,              MODIFIERKEY_RIGHT_ALT, 0,                 KEY_LEFT,        KEY_RIGHT,     0,                 MODIFIERKEY_LEFT_ALT, KEY_DOWN,      0               },  //8
  {KEY_1,          KEY_Q,           KEY_A,             KEY_Z,           KEYPAD_PERIOD, KEYPAD_0,          KEYPAD_PLUS,     KEYPAD_MINUS,  0               },  //9
  {KEY_5,          KEY_T,           KEY_G,             KEY_B,           KEY_TAB,       KEY_SPACE,         KEY_CAPS_LOCK,   KEY_TILDE,     0               },  //10
  {0,              0,               0,                 0,               KEY_8,         KEY_I,             KEY_K,           KEY_COMMA,     0               },  //11
  {KEY_F3,         0,               0,                 0,               KEY_7,         KEY_U,             KEY_J,           KEY_M,         0               },  //12
  {KEY_ESC,        KEY_F1,          KEY_F2,            KEY_PRINTSCREEN, KEY_6,         KEY_Y,             KEY_H,           KEY_N,         0               },  //13
};
int keyboardDvorak[14][9] =
{
  {0,              0,               KEY_RIGHT_BRACE,         KEY_BACKSPACE,   KEY_9,         KEY_R,             KEY_N,           KEY_V,         MODIFIERKEY_CTRL}, //0
  {0,              0,               KEY_PAUSE,         KEY_UP,          KEY_LEFT_BRACE,     KEY_SCROLL_LOCK,   0,               KEY_DELETE,    MODIFIERKEY_GUI },//1
  {KEY_4,          KEY_P,           KEY_U,             KEY_K,           KEYPAD_1,      KEYPAD_4,          KEYPAD_7,        KEY_NUM_LOCK,  MODIFIERKEY_CTRL},      //2
  {0,              0,               KEY_END,           0,               KEY_PAGE_DOWN, KEY_HOME,          KEY_INSERT,      KEY_PAGE_UP,   MODIFIERKEY_GUI },      //3
  {KEY_3,          KEY_PERIOD,      KEY_E,             KEY_J,           KEYPAD_2,      KEYPAD_5,          KEYPAD_8,        KEYPAD_SLASH,         0               },      //4
  {KEY_2,          KEY_COMMA,       KEY_O,             KEY_Q,           KEYPAD_3,      KEYPAD_6,          KEYPAD_9,        KEYPAD_ASTERIX,0               },      //5
  {KEY_EQUAL,      KEY_SLASH,       0,                 KEY_BACKSLASH,   KEY_0,         KEY_L,             KEY_S,           KEY_Z,     0               },   //6
  {0,              0,               MODIFIERKEY_SHIFT, KEY_MINUS,       KEY_ENTER,     MODIFIERKEY_SHIFT, 0,               KEYPAD_ENTER,  0               },      //7
  {0,              MODIFIERKEY_ALT, 0,                 KEY_LEFT,        KEY_RIGHT,     0,                 MODIFIERKEY_ALT, KEY_DOWN,      0               },
  {KEY_1,          KEY_QUOTE,       KEY_A,             KEY_SEMICOLON,   KEYPAD_PERIOD, KEYPAD_0,          KEYPAD_PLUS,     KEYPAD_MINUS,  0               },
  {KEY_5,          KEY_Y,           KEY_I,             KEY_X,           KEY_TAB,       KEY_SPACE,          KEY_CAPS_LOCK,   KEY_TILDE,     0               },
  {0,              0,               0,                 0,               KEY_8,         KEY_C,             KEY_T,           KEY_W,         0               },
  {KEY_F3,         0,               0,                 0,               KEY_7,         KEY_G,             KEY_H,           KEY_M,         0               },
  {KEY_ESC,        KEY_F1,          KEY_F2,            KEY_PRINTSCREEN, KEY_6,         KEY_F,             KEY_D,           KEY_B,         0               },
};

const char keyboard_dumb[14][9] =
{//0     1    2    3    4    5    6    7    8
  {0,    0,  '=', 'b', '9', 'o', 'l', '.', ','},//0
  {0,    0,  'p', 'u', '-', 's',  0,  'd', ','},//1
  {'4', 'r', 'f', 'v', '1', '4', '7', 'n', ','},//2
  {0,    0,  'e',  0,  'p', 'h', 'i', 'p', ','},//3
  {'3', 'e', 'd', 'c', '2', '5', '8', '/',  0},//4
  {'2', 'w', 's', 'x', '3',  '6', '9', '*', 0},//5
  {'[', ']',  0,  'b', '0', 'p', ';', '/',  0},//6
  {0,    0,  's', '"', 'e', 's',  0,  'e',  0},//7
  {0,   'a',  0,  'l', 'r',  0,  'a', 'd',  0},//8
  {'1', 'q', 'a', 'z', '.', '0', '+', '-',  0},//9
  {'5', 't', 'g', 'b', 't', ' ', 'C', '~',  0},//10
  {0,    0,   0,   0,  '8', 'i', 'k', ',',  0},//11
  {'f',  0,   0,   0,  '7', 'u', 'j', 'm',  0},//12
  {'e', 'f', 'f', 'p', '6', 'y', 'h', 'n',  0},//13
};

byte coffset = 14; // column offset for muxing through array, bit of a hack
//                    0 1 2  3  4  5  6  7  8  9 10 11 12 13  0  1  2  3  4  5  6  7  8
//                    0 1 2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22
byte mux[24] =       {5,6,9,10,11,12,13,14,15,16,17,20,21,22,23,24,25,26,27,28,29,30,31};
byte currentState[14][9];
byte previousState[14][9];

int sendKeyStatus[7] = {0,0,0,0,0,0,0};
byte keysOn = 0;
int modifiers[8] = {0,0,0,0,0,0,0,0};
byte modflag=0;
//modifiers go: ctrl, gui, shift, alt

int interval = 100;
unsigned long prevMillis = 0;
/*
 * A12 middle at 459 to 520, range 159-831, Y
 * A13 middle at 473 to 570, range 134-825, X
 * they range about 300 on either side of center
 * divide by 2?
 * Mouse.set_buttons(0, 0, 1);
 * Mouse.set_buttons(0, 0, 0);
 *            LEFT MIDDLE RIGHT
 */
byte leftMouse = 0;
byte middleMouse = 0;
byte rightMouse = 0;
void mouseButtons()
{
  leftMouse = 0;
  middleMouse = 0;
  rightMouse = 0;
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  if(!digitalRead(2))
  {
    leftMouse=1;
    Serial.println("leftmouse");
    delayMicroseconds(800);
  }
  if(!digitalRead(3))
  {
    middleMouse=1;
    Serial.println("middlemouse");
    delayMicroseconds(800);
  }
  if(!digitalRead(4))
  {
    rightMouse=1;
    Serial.println("rightmouse");
    delayMicroseconds(800);                  
  }
  
  Mouse.set_buttons(leftMouse, middleMouse, rightMouse);
}
int curMouse[2];
int prevMouse[2];
byte mousePins[2] = {A12, A13};
void readMouse()
{ 
  curMouse[0] = analogRead(mousePins[0]);
  curMouse[1] = analogRead(mousePins[1]);
}
void backupMouse()
{
  prevMouse[0] = curMouse[0];
  prevMouse[1] = curMouse[1];
}

byte mouseFlag =0;
byte divisor = 32;
void normalizeMouse() //positive x = right, pos y  = down, +-127
{
  mouseFlag=0;
  int tempy = 0;
  int tempx = 0;
  if(curMouse[0] < 375)
  {
    tempy = curMouse[0] - 375;
    tempy = tempy/divisor;
    mouseFlag=1;
  }
  if(curMouse[0] > 440)
  {
    tempy = curMouse[0] - 440;
    tempy = tempy/divisor;
    mouseFlag=1;
  }
  if(curMouse[1] < 450)
  {
    tempx = curMouse[1] - 450;
    tempx = tempx/divisor;
    mouseFlag=1;
  }
  if(curMouse[1] > 495)
  {
    tempx = curMouse[1] - 495;
    tempx = tempx/divisor;
    mouseFlag=1;
  }
  if(mouseFlag)
  {
    Mouse.move(tempx, tempy);
  }
}
void sendAll(int outputArray[])
{

  Keyboard.set_modifier(modifiers[0] | modifiers[1] | modifiers[2] | modifiers[3] | modifiers[4] |modifiers[5] | modifiers[6] | modifiers[7]);
  Keyboard.set_key1(outputArray[1]);
  Keyboard.set_key2(outputArray[2]);
  Keyboard.set_key3(outputArray[3]);
  Keyboard.set_key4(outputArray[4]);
  Keyboard.set_key5(outputArray[5]);
  Keyboard.set_key6(outputArray[6]);
  Keyboard.send_now();
}

void pinPullup()
{
  for(byte i = 0; i < 25; i++)
  {
    pinMode(mux[i], INPUT_PULLUP);
  }
}


void backupArray()
{
  for(byte row = 0; row < 14; row++)
  {
    for(byte col = 0; col < 9; col++)
    {
      previousState[row][col] = currentState[row][col];
    }
  }
}

void setup()
{
  Serial.begin(57600);
  pinPullup();
  for(byte i = 0; i < 14; i++)
  {
    for(byte t = 0; t < 9; t++)
    {
      currentState[i][t] = 0;
      previousState[i][t] = 0;
    }
  }
  pinMode(32, INPUT_PULLUP); //selector for keyboard type
}
byte keyEvent = 0;
void loop()
{
  doKeyboard();
  readMouse();
  backupMouse();
  normalizeMouse();
  /*
  Serial.print(analogRead(A12));
  Serial.print(" ");
  Serial.print(analogRead(A13));
  Serial.println();
  delay(10);
  */
  mouseButtons();
}

void doKeyboard()
{
  setKeyboardFormat();
  keyEvent = 0;
  backupArray();
  readTheKeys();
  compareCurArray();
  comparePrevArray();
  clear_output();
  poorThreading(5); //delaytime in micros
}
byte keyboardFormat = 1; // 1 is US, 0 is Dvorak
int currentKeyboardLayout[14][9];

void setKeyboardFormat() //pin 32 pullup
{
  pinMode(32, INPUT_PULLUP);
  keyboardFormat = digitalRead(32);
  //Serial.println(keyboardFormat);
  if(keyboardFormat)
  {
    for(byte row = 0; row < 14; row++)
    {
      for(byte col = 0; col < 9; col++)
      {
        currentKeyboardLayout[row][col] = keyboardUS[row][col];  //bad bad not good
      }
    }
  }
  else
  {
    for(byte row = 0; row < 14; row++)
    {
      for(byte col = 0; col < 9; col++)
      {
        currentKeyboardLayout[row][col] = keyboardDvorak[row][col];
      }
    } 
  }
}
void readTheKeys()  //THEY NEVER GET SET TO ZERO
{
  for(byte row = 0; row < 14; row++)
  {
    pinMode(mux[row], OUTPUT);    //set only one row LOW
    digitalWrite(mux[row], LOW);  //
    delayMicroseconds(10);        //allow pin voltage to rise 3v3

    for(byte col = coffset; col < 24; col++)
    {
      if(row == col)        //skip if you're gonna sample the pin thats obviously low
        continue;
      if(col == 6)          //some diode maybe? always reads 1 on all
        continue;
      delayMicroseconds(10);
      if(!digitalRead(mux[col]))  //one column is LOW now DEBOUNCE THIS YOU SHITLORD
      {
        delayMicroseconds(800);
        if(!digitalRead(mux[col]))
        {
          currentState[row][col-coffset] = 1;  //congrats you got one
          if(currentState[row][col-coffset] != previousState[row][col-coffset]) Serial.println(keyboard_dumb[row][col-coffset]); //just make sure its right ok?
        }
        
      }
      if(digitalRead(mux[col]))  //it reads high, no activity
      {
        currentState[row][col-coffset] = 0;  //NOW THEY GET SET TO ZERO
      }
    }
    pinMode(mux[row], INPUT_PULLUP);    //reset state of row
  }
}
void compareCurArray()
{
  for(byte row = 0; row < 14; row++)
  {
    for(byte col = 0; col < 9; col++)
   {
      if(currentState[row][col] == 1) //key is now PRESSED
      //if(previousState[row][col] != currentState[row][col]) //key is now PRESSED
      {
        modflag=0;
        keyEvent = 1;
        /*
        if(col == 8 || (row==7 && (col==2 || col==5)) || (row==8 && (col==1 ||col==6)))  //ITS A MODIFIER
        {
          handleModifiersOn(row, col);
        }
        */
       if(col == 8 && row ==0)
       {
          modifiers[0] = keyboardUS[row][col];
          modflag=1;
       }
       if(col==8 && row==1)
       {
          modifiers[1] = keyboardUS[row][col];
          modflag=1;
       }
       if(col==8 && row==2)
       {
          modifiers[2] = keyboardUS[row][col];
          modflag=1;
       }
      if(col==8 && row==3)
      {
        modifiers[3] = keyboardUS[row][col];
        modflag=1;
      }
      if(col==1 && row==8)
      {
        modifiers[4] = keyboardUS[row][col];
        modflag=1;
      }
      if(col==2 && row==7)
      {
        modifiers[5] = keyboardUS[row][col];
        modflag=1;
      }
      if(col==5 && row==7)
      {
        modifiers[6] = keyboardUS[row][col];
        modflag=1;
      }
      if(col==6 && row==8)
      {
        modifiers[7] = keyboardUS[row][col];
        modflag=1;
      }
              
        
        if(modflag==0)  //not a modifier
        {
          for(byte test = 1; test < 7; test++) //run through array real quick (just 1-6)
          {
            if(sendKeyStatus[test] == 0) 
            {
              sendKeyStatus[test] = currentKeyboardLayout[row][col]; //fill that array with the correct key being pressed
              keyEvent = 1;
              test = 9; //unnessecary?
              break;
            }
            break;
          }
        }
      }
    }
  }
}
void comparePrevArray()
{
   byte checkMe=1;
   
   for(byte row = 0; row < 14; row++)
  {
    for(byte col = 0; col < 9; col++)
   {
      if(currentState[row][col] == 0) //now a key has been UNpressed
      {
        modflag = 0;
        checkMe=0;
        keyEvent = 1;
        //handleModifiersOff(row, col);
       /* 
       if(col == 8 || (row==7 && (col==2 || col==5)) || (row==8 && (col==1 || col== 6)))  //ITS A MODIFIER
       {
          continue;
       }
       */
       if(col == 8 && row ==0)
       {
          modifiers[0] = 0;
          modflag=1;
       }
       if(col==8 && row==1)
       {
          modifiers[1] =0;
          modflag=1;
       }
       if(col==8 && row==2)
       {
          modifiers[2] = 0;
          modflag=1;
       }
      if(col==8 && row==3)
      {
        modifiers[3] = 0;
        modflag=1;
      }
      if(col==1 && row==8)
      {
        modifiers[4] = 0;
        modflag=1;
      }
      if(col==2 && row==7)
      {
        modifiers[5] = 0;
        modflag=1;
      }
      if(col==5 && row==7)
      {
        modifiers[6] = 0;
        modflag=1;
      }
      if(col==6 && row==8)
      {
        modifiers[7] = 0;
        modflag=1;
      }

       
       if(!modflag)
      
      {
          for(byte test = 1; test < 7; test++) //run through array real quick (just 1-6)
          {
            if(sendKeyStatus[test] == currentKeyboardLayout[row][col]) //if the array has the key being unpressed in it
            {
              sendKeyStatus[test] = 0; //you unpress that fucking key 
              keyEvent = 1;
              test = 9; //unnessecary?
              break;
            }
            break;
          }
        }
      }
    }
  }
}

void poorThreading(int delaytime)
{
  unsigned long currentMillis = micros();  //get current time babu

  if(currentMillis - prevMillis >= delaytime) //peep them differences and do it or not
  {
    prevMillis = currentMillis;
    sendAll(sendKeyStatus);
  }
} 
void clear_output()
{
   byte checkMe=1;
   for(byte row = 0; row < 14; row++)
   {
     for(byte col = 0; col < 9; col++)
     {
      if(previousState[row][col] == 1)checkMe=0;
     }
   }
   if(checkMe==1)
   {
    for(byte i=0;i<8;i++)
    {
      sendKeyStatus[i] = 0;
      //modifiers[i] = 0;
    }
  }
}
/*
void handleModifiersOn(byte row, byte col)
{
  if(col==8 && row==0)
  {
    //sendKeyStatus[0] |= keyboardUS[row][col]; //modifiers get or'd
    modifiers[0] = keyboardUS[row][col];
    keyEvent = 1;
    modflag=1;
  }
  else
  {
    modifiers[0] = 0;
  }
  if(col==8 && row==1)
  {
    //sendKeyStatus[0] |= keyboardUS[row][col]; //modifiers get or'd
    modifiers[1] = keyboardUS[row][col];
    keyEvent = 1;
    modflag=1;
  }
  else
  {
    modifiers[1] = 0;
  }
  if(col==8 && row==2)
  {
    //sendKeyStatus[0] |= keyboardUS[row][col]; //modifiers get or'd
    modifiers[2] = keyboardUS[row][col];
    keyEvent = 1;
    modflag=1;
  }
  else
  {
    modifiers[2]=0;
  }
  if(col==8 && row==3)
  {
    //sendKeyStatus[0] |= keyboardUS[row][col]; //modifiers get or'd
    modifiers[3] = keyboardUS[row][col];
    keyEvent = 1;
    modflag=1;
  }
  else
  {
    modifiers[3]=0;
  }
  if(col==1 && row==8)
  {
    //sendKeyStatus[0] |= keyboardUS[row][col]; //modifiers get or'd
    modifiers[4] = keyboardUS[row][col];
    keyEvent = 1;
    modflag=1;
  }
  else
  {
    modifiers[4] = 0;
  }
  if(col==2 && row==7)
  {
    //sendKeyStatus[0] |= keyboardUS[row][col]; //modifiers get or'd
    modifiers[5] = keyboardUS[row][col];
    keyEvent = 1;
    modflag=1;
  }
  else
  {
    modifiers[5] =0;
  }
  if(col==5 && row==7)
  {
    //sendKeyStatus[0] |= keyboardUS[row][col]; //modifiers get or'd
    modifiers[6] = keyboardUS[row][col];
    keyEvent = 1;
    modflag=1;
  }
  else
  {
    modifiers[6]=0;
  }
  if(col==6 && row==8)
  {
    //sendKeyStatus[0] |= keyboardUS[row][col]; //modifiers get or'd
    modifiers[7] = keyboardUS[row][col];
    keyEvent = 1;
    modflag=1;
  }
  else
  {
    modifiers[7]=0;
  }
}

*/
