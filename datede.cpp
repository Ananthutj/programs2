#include<iostream>
using namespace std;


bool leapyear(int year){
     if (year % 400 == 0){
        return true;
     }
    if (year % 100 == 0){
        return false;
    }
    if (year % 4 == 0){

        return true;
    }
    return false;
}
bool validator(int day,int month,int year){

    if(year<0){
        return false;
    }
    if(month<1||month>12){
        return false;
    }
    if(day<1||day>31)
    {
        return false;
    }

    if(month==2){
        if(leapyear(year)){
            if(day>29){
                return false;
            }
        }else{
            if(day>28){
                return false;
            }
        }
    }

    if (month ==4||month==6||month==9||month==11){
        if(day>30)
        {
            return false;
        }
    }

    return true;
}
class Date{
	private:
		int day,month,year;
	public:
		Date(int day,int month,int year){
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void operator --(){
			
			if(validator(day,month,year)){
			day--;

        if(month==2)
        {
          if(leapyear(year))
        {
            if(day>29)
            {
                return false;
            }
        }
        else
        {
            if(day>28){
                return false;
            }
        }
    }

    if (month ==4||month==6||month==9||month==11){
        if(day>30){
            return false;
        }
    }

    return true;
};

void Date::display(){
     bool result = validator();
       if(month==3)
       {
       if(leapyear(year)){
            if(day==1){
                day=29;
                month--;
            }else{
                day--;
            }
        }else{
            if(day==1){
                day=28;
                month--;
            }else{
                day--;
            }
        }
       
    }else if(month ==4||month==6||month==9||month==11){
        if(day==1){
            day=31;
            month--;
        }else{
            day--;
        }
    }else if(month==1){
        if(day==1){
            day=31;
            month=12;
            year--;
        }else{
            day--;
        }
    }else{
        if(day==1){
            day=30;
            month--;
        }else{
            day--;
        }
    }
   
    
    (result==true)?cout<<"Valid\t Next Date :"<<day<<"/"<<month<<"/"<<year<<endl:cout<<"Not valid"<<endl;
    
	
              
		
		}else{
			cout<<"Date is invalid"<<endl;
			}		
					
		

		}

		void display(){
			if(validator(day,month,year)){
				cout<<"The date is "<<day<<"/"<<month<<"/"<<year<<endl;
			}
		}
		
};

int main(){
	int day,month,year;
	int n;
	cout<<"Enter date: ";
	cin>>day>>month>>year;
	Date date(day,month,year);
	
	date--;
	date.display();
	
return 0;
}