
void spoof(){
   system("sudo service network-manager stop");
   system("sudo macchanger -r wlan0");
   system("sudo service network-manager start");
   }
