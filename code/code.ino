class RAL{
    private:
        int relay;
        void relayAttach(int Relay){
            relay=Relay;
            pinMode(relay,OUTPUT);
        }
        void SendMsg(String msg){

        }
};
void setup(){

}
void loop(){

}