if((x_wins==1 && o_wins==1) || (countx-counto<0)||(countx-counto>1))cout<<"3\n";
else if(countx==0 && counto==0 && count_==9)cout<<"2\n";
else if(x_wins==1 && o_wins==0 and countx>0)cout<<"1\n";
else if(x_wins==0 && o_wins==1 && countx==counto)cout<<"1\n";
else if(x_wins==0 && o_wins==0 && count_==0)cout<<"1\n";
else if(x_wins==0 && o_wins==0 && count_>0)cout<<"2\n";
else if(count_==0 && x_wins==2){cout<<"1\n";}
else cout<<"3\n";