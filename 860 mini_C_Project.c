#include<stdio.h>
int main()
{
    int CustomerID;
    int Password,cardnumber,month,year,CVV;
    int choice,Choice,CHoice,CHOice,CHOIce,CHOICe,choicE;
    int OTP,accountno,ACCOUNTNO,IFSCCODE;
    char beneficiary,c,modeoftransaction;
    float TotalAvailableBalance,amount;
    printf("enter CHOICe 1 for Existing user\nenter CHOICe 2 for New user");
    printf("enter the CHOICe");
    scanf("%d",&CHOICe);
    if (CHOICe==2)
    {
        printf("enter the card number");
        scanf("%d",&cardnumber);
        printf("enter valid through (month/year)");
        scanf("%d%d",&month,&year);
        printf("enter CVV number");
        scanf("%d",&CVV);
        if ((cardnumber==970133068)&&(month==5)&&(year==2022)&&(CVV==678))
        {
            printf("Your card details are valid\n");
            printf("Your CustomerID is 1234567890\nRemember this CustomerID, which will be useful for further transactions\n");
            printf("Create password only using the digits from 0-9");
            scanf("%d",&Password);
            printf("Your Password is successfully created\nRemember the Password for further Transactions");
        }
        else 
        {
            printf("Your card details are invalid");
        }
        
    }
    else if (CHOICe==1)
    {
    printf("Enter the CustomerID");
    scanf("%d",&CustomerID);
    printf("Enter the Password");
    scanf("%d",&Password);
    if ((CustomerID==1234567890)&&(Password==2212))
    { 
        printf("Login Successful\n");
        printf("Enter choice 1 to check Total available balance\nEnter choice 2 to add a beneficiary\nEnter choice 3 for Transaction\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch (choice)
        {   
                case 1:
                {
                    TotalAvailableBalance=1000000.00;
                    printf("Total Available Balance=Rs %.2f\n",TotalAvailableBalance);
                }
                break;
                case 2:
                {
                    printf("Enter the beneficiary Account No\n");
                    scanf("%d",&accountno);
                    printf("Enter the beneficiary Account No again\n");
                    scanf("%d",&ACCOUNTNO);
                    printf("select the BANK\nEnter choicE 1 to select HDFC BANK\nEnter choicE 2 to select ICICI BANK\nEnter choicE 3 to select SBI\nEnter choicE 4 to select AXIS BANK\n");
                    scanf("%d",&choicE);
                    if ((choicE==1)||(choicE==2)||(choicE==3)||(choicE==3)||(choicE==4))
                    {
                        printf("enter the IFSC CODE with only digits");
                        scanf("%d",&IFSCCODE);
                    }
                    else 
                    {
                        printf("INVALID BANK\n");
                        break;
                    }
                    if ((accountno==912173648)&&(ACCOUNTNO==912173648)&&(IFSCCODE==971919))
                    {
                        printf("Beneficiary is successfully added\nNow, you can transfer amount for this beneficiary");
                    }
                    else
                    {
                        printf("INCORRECT beneficiary account details\n");
                    }
                }
                break;
                case 3:
                {
                            TotalAvailableBalance=1000000.00;
                            printf("Total Available Balance=%.2f\n",TotalAvailableBalance);
                            printf("select an Account from which you are going to transfer the amount\n");
                            printf("Enter the Choice 1 to transfer the amount form 'KARUR CHANDRA(Account No: 163464519756)' Accont\nEnter Choice 2 to transfer amount from 'ABHINASH GUNDA(Account No: 5464564546344)\n");
                            printf("Enter the Choice\n");
                            scanf("%d",&Choice);
                            if ((Choice==1)||(Choice==2))
                            {
                                printf("select a Beneficiary\n");
                                printf("Enter CHoice 1 for Rohith(Account No: 546565497)\nEnter CHoice 2 for Lokendra(Account No: 4689785465465)\nEnter CHoice 3 for Yoga(Account No: 6545654485622)\nEnter CHoice 4 for Hemanth(Account No: 46778754661452564)");
                                printf("Enter CHoice\n");
                                scanf("%d",&CHoice);
                                if ((CHoice==1)||(CHoice==2)||(CHoice==3)||(CHoice==4))
                                {
                                    printf("Enter the Amount\n");
                                    scanf("%f",&amount);
                                    if (amount<=200000)
                                    {
                                        printf("mode of transaction is IMPS\n");
                                    }
                                    else if (amount>200000)
                                    {
                                        printf("mode of transaction is RTGS\n");
                                    }
                                    printf("Enter CHOice 1 to cancel the transaction\nEnter CHOice 2 to Proceed to Pay\n");
                                    printf("Enter the CHOice\n");
                                    scanf("%d",&CHOice);
                                    if (CHOice==2)
                                    {
                                    printf("select CHOIce 1 to receive OTP to registered phone no\nselect CHOIce 2 to receive OTP to registered mail\n");
                                    printf("Enter the CHOIce");
                                    scanf("%d",&CHOIce);
                                    if ((CHOIce==1)||(CHOIce==2))
                                    {
                                    printf("Enter the OTP\n");
                                    scanf("%d",&OTP);
                                    if (OTP==456896)
                                    {
                                        TotalAvailableBalance=TotalAvailableBalance-amount;
                                        printf("Transaction Successful\nRs %.2f amount is debited form your Account\nTotalAvailable=Rs %.2f",amount,TotalAvailableBalance);
                                    }
                                    else if (OTP!=456896)
                                    {
                                        printf("Invalid OTP\nTransaction Unsuccessful\n");
                                    }
                                    }
                                    else
                                    {
                                        printf("invalid choice");
                                    }
                                    }
                                    else
                                    {
                                        printf("Transaction is cancelled");
                                    }
                                }
                                else
                                {
                                    printf("Invaid CHoice");
                                }
                            }
                            else
                            {
                                printf("INVALID Choice");
                            }
                }
                break;
                default :
                {
                    printf("INVALID choice");
                }
        }
    }
    else if ((CustomerID==1234567890)&&(Password!=2212))
    {
        printf("Your CustomerID and Password do not match\nPlease try again\n");
    }
    else
    {
        printf("Invalid CustomerID and Password\n");
    }
    }
    else 
        {
            printf("INVALID CHOICe");
        }
    return 0;
        
}