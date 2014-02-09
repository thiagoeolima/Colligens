package util;

import java.io.File;
import java.io.IOException;

import jxl.Workbook;
import jxl.write.Label;
import jxl.write.WritableSheet;
import jxl.write.WritableWorkbook;
import jxl.write.WriteException;
import jxl.write.biff.RowsExceededException;

public class XlsWriter {

	private WritableWorkbook workbook; 
	private WritableSheet sheet;
	
	public XlsWriter(String spreadsheet, String sheetName, int sheetIndex) {
		try {
			this.workbook = Workbook.createWorkbook(new File(spreadsheet));
		} catch (IOException e) {
			e.printStackTrace();
		}
		this.sheet = workbook.createSheet(sheetName, sheetIndex);
	}
	
	public void writeLabelToXLS(int column, int row, String text){
		Label label = new Label(column, row, text); 
		try {
			this.sheet.addCell(label);
		} catch (RowsExceededException e) {
			e.printStackTrace();
		} catch (WriteException e) {
			e.printStackTrace();
		} 
	}
	
	public void writeNumberToXLS(int column, int row, int text){
		jxl.write.Number number = new jxl.write.Number(column, row, text); 
		try {
			this.sheet.addCell(number);
		} catch (RowsExceededException e) {
			e.printStackTrace();
		} catch (WriteException e) {
			e.printStackTrace();
		} 
	}
	
	public void writeToFile(){
		try {
			this.workbook.write();
			this.workbook.close();
		} catch (Exception e) {
			e.printStackTrace();
		} 
	}
}
