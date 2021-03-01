void code(){

std::cout<<"This is a code! Incredible, isn't it?"<<std::endl;
std::chrono::seconds time(2);
std::this_thread::sleep_for(time);
std::cout<<"But this code do nothing."<<std::endl;
std::this_thread::sleep_for(time);
std::cout<<"Or better: it can make you lose some seconds of your life. Have a nice day!"<<std::endl;

}
