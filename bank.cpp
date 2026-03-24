#include <iostream>
#include <ctime>
using namespace std;
int main(){
  int pin;
  cout<<"Welcome Miss Wanangwa Nyirenda Please enter your PIN to login to Mo626 \n";
  cin>>pin;
  int service;
  cout<<"Select a service\n 1. Account \n 2. Send money \n 3. Make Payment \n 4. Topup \n 5. Mo626 Payment \n 6. Cash/Agent Service \n 7. Invest/Insurance \n 8. PIN Change \n 9. Public Services \n n. Next \n";
  cin>>service;
  switch (service){
    int ser;
    case 1: 
    cout<<"Select Service \n 1. Balance inquiry \n 2. Mini Statement \n 3. Stop Payment \n 4. Cheque Book Request \n 5. Forex Application Status \n # Main Menu \n";
    cin>>ser;
    switch(ser){
      case 1: 
      int account;
      cout<<"Please select an account to transact. \n 1. 1011404495  "<<endl;
      cin>>account;
      time_t now =time(0);
      tm *ltm =localtime(&now);
      string months[]={"January" ,"February" ,"March", "April" ,"May", "June" ,"July", "August" ,"September" ,"October" ,"November" ,"December"};
      double balance=250000.00;
      cout<<"Balance as on  "<<ltm->tm_mday<<" "<<months[ltm->tm_mon]<<" is MK"<<balance<<endl;
      break;
      case 2:
      cout<<"Please select account to transact. \n 1. 1011404495";
      break;
      case 3:
      cout<<"Your account is not allowed to use this service. Reply with a # for main menu";
      break;
      case 4:
      cout<<"Your account is not allowed to use this service.Reply with a # for main menu ";
      break;
      case 5:
      cout<<"Please select an account to transact. \n 1. 1011404495";
      break;
      

    }
    break;
    int NBM;
    
    case  2:
    cout<<"Select Service \n 1. Within NBM \n 2. To Other Banks \n 3. To Mobile Money Wallet \n # Main Menu";
    cin>>NBM;
    switch(NBM){
      case 1:
      cout<<"Select Service \n 1. To account \n 2. To phone No. on Mo626 \n 3. To NBM Merchant \n 4. To Institution \n # Main Menu";
    }

    break;
    case 3: 
    cout<<"Select Service \n 1. DSTv \n 2. Water Board \n 3. Electricity \n 4. MRA \n 5. MyFuel \n 6. Tertiary Tuition/Fees \n 7. MASM \n 8. Credit Card Repayment \n 9. Malawi Housing Corp. \n n. Next";
    break;
    case 4:
    cout<<"Select Top Up Type \n 1. Mobile \n 2. Internet \n # Main Menu";
    break;
    case 5: 
    cout<<"Please Enter Merchant ID \n";
    int merch;
    cin>>merch;
    break;
    case 6:
    cout<<"Select service \n 1. Cash out \n 2. Cardless Withdraw \n #";
    break;
    case 7:
    cout<<"Select Service \n 1. Old Mutual \n 2. Stock Broker \n 3. United General Insurance(UGI) \n # Main Menu";
    break;
    case 8:
    cout<<"Type your current pin";
    int code;
    cin>>code; 
    break;
    case 9:
    cout<<"Select service for \n 1. National Construction Industry Council(NCIC) \n 2. Malawi Housing Corp. \n 3. Blantyre City Council \n 4. Registrar General Payments \n # Main Menu   ";
    break;
    case '#': 
    cout<<"10. Merchant Reg \n 11. WhatsApp \n 12. Exit \n h. Home \n p. Prev";
    break;

  }
  return 0;
}