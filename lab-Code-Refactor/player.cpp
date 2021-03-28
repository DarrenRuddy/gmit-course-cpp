  #include "player.h"

    Player::Player(){
        this->forename = "";
        this->surname = "";
        this->position="";
        this->mobileNumber="";
        this->dob=0;
        this->on_team="";

    }
    Player::Player(string forename, string surname){
        forename=forename;
        this->surname=surname;
    }


    Player::Player(string forename, string surname, int mobileNumber, string position, string on_team){
        this->forename=forename;
        this->surname=surname;
        this->mobileNumber=mobileNumber;
        this->position=position;
        this->on_team=on_team;
    }

    void Player::printPlayerInfo(){
        cout<<"Name:"<<forename<<" "<<surname<<", DOB: "<<dob<<", position:"<<position<<", contact:  "<<mobileNumber<< on_team <<endl;
    }
    string Player::getForename(){
        return forename;
    }
    string Player::getSurname(){
        return surname;
    }
    void Player::setMobileNumber(string mobileNumber){
        this->mobileNumber = mobileNumber;
    }
    string Player::getMobileNumber(){
        return this->mobileNumber;
    }
    void Player::setName(string name){
        this->forename=name;
    }
    void Player::setName(string forename,string surname){
        this->forename = forename;
        this->surname = surname;
    }
    void Player::setPosition(string position){
        this->position = position;
    }
    string Player::getPosition(){
        return this->position;
    }
    void Player::setDOB(int dob){
       this->dob=dob;
    }
    int Player::getDOB(){
        return dob;
    }
    void Player::seton_team(string on_team){
        this-> on_team = on_team;
    }
    string Player::geton_team (){
        return this->on_team;
    }
