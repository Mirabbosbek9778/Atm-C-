// #include <iostream>

// using namespace std;

// int main()
// {
//     /////////////5-masala
//     int d,m,y;
//     cout<<"day = "; cin>>d;
//     cout<<"month = "; cin>>m;
//     cout<<"year = "; cin>>y;
//     int n =y-1984;
//     int r =(n%5);
//     string rang;
//     switch(r){
//       case 0:rang= "yashil"; break;
//       case 1:rang= "qizil"; break;
//       case 2:rang= "sariq"; break;
//       case 3:rang= "oq"; break;
//       case 4:rang= "qora"; break;
//       default:rang="bunday rang yoq"; break;
// }
//     int f=n%12;
//     string muchal;
// cout<<rang<<endl;
//    switch(f){
//      case 0:muchal= "sichqon"; break;
//      case 1:muchal= "sigir"; break;
//      case 2:muchal= "yolbars"; break;
//      case 3:muchal= "quyon "; break;
//      case 4:muchal= "ajdar"; break;
//      case 5:muchal= "ilon"; break;
//      case 6:muchal= "ot"; break;
//      case 7:muchal= "qo`y"; break;
//      case 8:muchal= "maymun "; break;
//      case 9:muchal= "tovuq"; break;
//      case 10:muchal= "it"; break;
//      case 11:muchal= "tong`iz"; break;
//      default:muchal="bunday muchal yoq"; break;
//    }
// cout<<muchal<<endl;

//    if((m>1 && m<=2) && (d>=20  d<=18)){
//      cout<<"qovga"<<endl;
//    }else if((m>2 && m<=3) && (d>=19  d<=20)){
//      cout<<"baliq"<<endl;
//    }else if((m>3 && m<=4) && (d>=21  d<=19)){
//      cout<<"Qo`y"<<endl;
//    }else if((m>4 && m<=5) && (d>=20  d<=20)){
//      cout<<"buzoq"<<endl;
//    }else if((m>5 && m<=6) && (d>=21  d<=21)){
//      cout<<"egizaklar"<<endl;
//    }else if((m>6 && m<=7) && (d>=22  d<=22)){
//      cout<<"qisqichbaqa"<<endl;
//    }else if((m>7 && m<=8) && (d>=23  d<=22)){
//      cout<<"arslon"<<endl;
//    }else if((m>8 && m<=9) && (d>=23  d<=22)){
//      cout<<"parizod"<<endl;
//    }else if((m>9 && m<=10) && (d>=22  d<=22)){
//      cout<<"tarozi"<<endl;
//    }else if((m>10 && m<=11) && (d>=23  d<=22)){
//      cout<<"chayon"<<endl;
//    }else if((m>11 && m<=12) && (d>=23  d<=21)){
//      cout<<"oqotar"<<endl;
//    }else if((m>12 && m<=1) && (d>=22  d<=19)){
//      cout<<"echki"<<endl;
//    }
//    main();
//     return 0;
// }



////////////////////////
////////////////bollardan qop ketmaslik kerak oqishmas uqib olish kerak mirabbos iltimos oqi akang qiynalyapti/////

// /////////////QUDRAT ABDURAHIMOV  MASALALARI////////////

// ///////////////////1-MASALA/////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//  int n;
//  cout<<"n = "; cin>>n;
//  int arr[n];
//  srand(time(NULL));
//  for(int i=0; i<n; i++){
//     arr[i]=rand()%10;
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;
//  for(int i=0; i<n; i++){
//   if(arr[i]%2==1){
//     cout<<"toq sonlar :"<<arr[i]<<endl;
//   }
//  }

//  main();
//  return 0;
// }
// ////////////////////2-MASALA/////////////////

// #include <bits/stdc++.h>
// #include <windows.h>
// #include <cmath>

// using namespace std;

// int main(){
//  int n;
//  cout<<"arreyni size :"; cin>>n;
//  int arr[n];
//  int s;
//  cout<<"darajasi :"; cin>>s;
//  for(int i=0; i<n; i++){
//   arr[i]=pow(s,i);
//   cout<<arr[i]<<endl;
//  }

//  main();
//  return 0;
// }

// ////////////////////////3-masala/////////////////

// #include <bits/stdc++.h>
// #include <windows.h>
// #include <cmath>

// using namespace std;

// int main(){
//  int n;
//  cout<<"n = "; cin>>n;
//  int arr[n];
//  int ms;
//  cout<<"ms = "; cin>>ms;
//  for(int i=0; i<n; i++){
//     arr[i]=n;
//     n=n-1+ms;
//  }
//    cout<<n<<endl;

//  main();
//  return 0;
// }
// ///////////////////4-masala///////////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//  int n;
//  cout<<"n = "; cin>>n;
//  int arr[n];
//  int ms;
//  cout<<"ms = "; cin>>ms;
//  for(int i=0; i<n; i++){
//     arr[i]=n;
//     n=n-1*ms;
//  }
//    cout<<n<<endl;

//  main();
//  return 0;
// }    
// //////////////////////7-masala/////////////////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//  int a,temp;
//  cout<<"arreyning uzunligi : "; cin>>a;
//  int arr[a];
//  srand(time(NULL));

//  for(int i=0; i<a; i++){
//     arr[i]=rand()%10;
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;
//  for(int i=0; i<a; i++){
//     for(int j=i+1; j<a; j++){
//         if(arr[i]<arr[j]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//  }
//  for(int i=0; i<a; i++){
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;


//  main();
//  return 0;
// }
// /////////////////////////////8-masala///////////////////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//  int a,sum=0;
//  cout<<"arreyning uzunligi : "; cin>>a;
//  int arr[a];

//  srand(time(NULL));
//  for(int i=0; i<a; i++){
//     arr[i]=rand()%10;
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;
//  for(int i=0; i<a; i++){
//     if(arr[i]%2==1){
//         sum++;
//         cout<<"orasidan toqlari :"<<arr[i]<<"  ";
//     }
//  }
//  cout<<endl;
//  cout<<"toqlar soni :"<<sum<<endl;
//  cout<<endl;
//  main();
//  return 0;
// }
// ////////////////////////////9-masala///////////////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//  int a,sum=0;
//  cout<<"arreyning uzunligi : "; cin>>a;
//  int arr[a];

//  srand(time(NULL));
//  for(int i=0; i<a; i++){
//     arr[i]=rand()%10;
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;
//  for(int i=0; i<a; i++){
//     if(arr[i]%2==0){
//         sum++;
//         cout<<arr[i]<<"  ";
//     }
//  }
//  cout<<endl;
//  cout<<"juftlar soni :"<<sum<<endl;
//  cout<<endl;
 
//  main();
//  return 0;
// }
// /////////////////////////29-masala/////////////////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//  int a;
//  cout<<"arreyning uzunligi  : "; cin>>a;
//  int arr[a];

//  srand(time(NULL));
//  for(int i=0; i<a; i++){
//     arr[i]=rand()%10;
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;

//  if(arr[0]>arr[a-1] && arr[0]>arr[a/2]){
//     cout<<arr[0]<<endl;
//  }else if(arr[a/2]>arr[a-1] && arr[a/2]>arr[0]){
//     cout<<arr[a/2]<<endl;
//  }else if(arr[a-1]>arr[0] && arr[a-1]>arr[a/2]){
//     cout<<arr[a-1]<<endl;
//  }
 
//  main();
//  return 0;
// }
// //////////////////////////30-masala/////////////////////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//  int a,temp;
//  cout<<"arreyning uzunligi : "; cin>>a;
//  int arr[a];
//  srand(time(NULL));

//  for(int i=0; i<a; i++){
//     arr[i]=rand()%10;
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;
//  for(int i=0; i<a; i++){
//     for(int j=i+1; j<a; j++){
//         if(arr[i]>arr[j]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//  }
//  for(int i=0; i<a; i++){
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;

//  main();
//  return 0;
// }
// /////////////////////14-masala///////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//  int a,temp;
//  cout<<"arreyning uzunligi : "; cin>>a;
//  int arr[a];

//  srand(time(NULL));
//  for(int i=0; i<a; i++){
//     arr[i]=rand()%10;
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;
// for(int i=0; i<a; i++){
//     for(int j=i+1; j<a; j++){
//         if(arr[i]<arr[j]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//  }
//  for(int i=0; i<a; i++){
//     if(arr[i]%2==1){
//         cout<<arr[i]<<"  ";
//     }
//  }
//  cout<<endl;

//  main();
//  return 0;
// }
// ///////////////////15-masala/////////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//  int a,temp;
//  cout<<"arreyning uzunligi : "; cin>>a;
//  int arr[a];

//  srand(time(NULL));
//  for(int i=0; i<a; i++){
//     arr[i]=rand()%10;
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;
//  for(int i=0; i<a; i++){
//     for(int j=i+1; j<a; j++){
//         if(arr[i]<arr[j]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//  }
//  cout<<endl;
//  for(int i=0; i<a; i++){
//     if(arr[i]%2==0){
//         cout<<arr[i]<<"  ";
//     }
//  }
//  cout<<endl;

//  main();
//  return 0;
// }
// //////////////////////31-masala//////////////////////////

// #include <bits/stdc++.h>
// #include <windows.h>

// using namespace std;

// int main(){
//   int a,temp,sum=0;
//  cout<<"arreyning uzunligi : "; cin>>a;
//  int arr[a];
//  srand(time(NULL));

//  for(int i=0; i<a; i++){
//     arr[i]=rand()%10;
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;
//  for(int i=0; i<a; i++){
//     for(int j=i+1; j<a; j++){
//         if(arr[i]<arr[j]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//     sum++;
//  }
//  cout<<"soni : "<<sum<<endl;
 
//  for(int i=0; i<a; i++){
//     cout<<arr[i]<<"  ";
//  }
//  cout<<endl;

//  main();
//  return 0;
// }
// ////////////////////////////-masala//////////////////////////

