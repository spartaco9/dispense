
void spoof(){
   system("sudo service network-manager stop");
   system("sudo macchanger -p wlan0");
   system("sudo service network-manager start");
   }
