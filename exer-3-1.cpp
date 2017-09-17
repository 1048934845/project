#include <iostream.h>
void main()
{
	int x;
	cout<<"Please input x:"<<endl;
	cin>>x;
	if(x>=1000)
	    cout<<":其数值在1000以上"<<endl;
	else
		if(x>=100)
	        cout<<":其数值在100~999"<<endl;
	    else
			if(x>=10)
				cout<<":其数值在10~99"<<endl;
			else
				cout<<":其数值小于10"<<endl;
}

#include <iostream.h>
void main()
{
	int x;
	cout<<"Please input x:"<<endl;
	cin>>x;
	switch(x)
	    case 1:
	    ... ...
	    case 9:cout<<":其数值小于10";break;
	      case 10:
		  ... ...
          case 99:cout<<":其数值在10~99";break;
		    case 100:
            ... ...
			case 999:cout<<":其数值在100~999";break;
			default:cout<<"其数值在1000以上";
}
