int main(){
	while(1){
		if(digital(8)==0){
			if(analog(1)<800 && analog(3)<800) {
				motor(0,100);
				motor(2,100);
				printf("Both");
				}
				else if (analog(1)>=800 && analog(3)<800){
				motor(2,50);
				motor(0, 100);
				printf("Turning left");
			
			} else if(analog(1)>=800 && analog(3)>=800){
				ao();
				motor(0,-100);
				motor(2,100);
				msleep(1200);
			} else {
				motor(0,50);
				motor(2,100);
				printf("Turning right");
			
			}
		} else {
			ao();
			motor(0,-100);
			motor(2,100);
			msleep(1500);
		}
	}
}
