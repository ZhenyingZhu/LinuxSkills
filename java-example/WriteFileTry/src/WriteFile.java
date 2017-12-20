import java.io.*;
import java.util.ArrayList;


public class WriteFile {

	public static void main(String[] args) {
		String inputation = "Columbia log in. "; 
		ArrayList<String> logInfo = new ArrayList<String>();
		logInfo.add(inputation);
		inputation = "log out. ";
		logInfo.add(inputation);
		write("E:\\123.txt", logInfo);

	}
	
	public static void write(String path, ArrayList<String> content) {
		String s1 = new String();
		try {
			File recordLog = new File(path);
			if (recordLog.exists()) {
				System.out.println("Exist. ");
			} else {
				recordLog.createNewFile();
				if (!recordLog.createNewFile()) {
					System.out.println("Error. ");
				}
			}
			BufferedWriter writeOut = new BufferedWriter(new FileWriter(recordLog));
			for(int i=0; i<content.size(); i++){
				s1 = content.get(i);
				writeOut.write(s1);
				writeOut.newLine();
				writeOut.flush();
			}
			writeOut.close();
			} catch (Exception e) {
				e.printStackTrace();
			}
		}

}
/*
bufferedWriter.write(data);bufferedWriter.newLine();//����
 ˢ�¸����Ļ��塣
 �ؼ���һ�д��롣���û�м����д��롣����ֻ�Ǳ����ڻ������С�û��д���ļ���
 �������в��ܽ�����д��Ŀ�ĵء�
bufferedWriter.flush();
write.close();
bufferedWriter.close();
 */
