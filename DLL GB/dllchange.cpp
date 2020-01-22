#include "dll.h"
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <iostream>

/**

Arquivo codado por KyLL3R. (BETA)

*/


int main(){
    
    HWND hWnd = FindWindow(0, "GBGMGAME"); 
    DWORD proc_id; 

         		GetWindowThreadProcessId(hWnd, &proc_id); 

         		HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, proc_id); 
      
      
      BYTE newdata[]={0x35, 0x45, 0x55, 0x65}; 
             			DWORD newdatasize = sizeof(newdata); 

      
    
    WriteProcessMemory(hProcess, (LPVOID)0x004F277F, &newdata, newdatasize, NULL);
    

}
