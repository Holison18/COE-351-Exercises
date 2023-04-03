#include <iostream>
#include <list>
#include <string.h>

using namespace std;

// class youtube channel
class youtubeChannel{
    private:
        string channel_name;
        string owner_name;
        list<string>Published_Video_Title;
        int subscriber_count;
    public:
        // constructor
        youtubeChannel(string Channel_name,string User_name){
            channel_name = Channel_name;
            owner_name = User_name;
        }
        // subscribe function which increases the number of subscribers by 1
        void subscribe(){
                subscriber_count+=1; 
        }

        // unsubscribe function which decreases the number of subscribers by 1
        void unsubscribe(){
            if(subscriber_count>0)
                subscriber_count-=1;
            else
                cout<<"No subscribers yet"<<endl;
        }

        void publishVideo(string video_name){
            Published_Video_Title.push_back(video_name);
        }

        void set_data(){
            cout<<"Channel Name: "<<channel_name<<endl;
            cout<<"Owner Name: "<<owner_name<<endl;
            cout<<"Subscribers: "<<subscriber_count<<endl;
            for(string i:Published_Video_Title){
                cout<<i<<endl;
            }
        }
};

int main(){
    // youtube channel 
    cout<<"Youtube Channel"<<endl;
    string channel_name,owner_name;
    cout<<"Channel Name: ";
    getline(cin,channel_name);
    cout<<"Owner Name: ";
    getline(cin,owner_name);
    youtubeChannel ytchannel(channel_name,owner_name);
    cout<<"\n\nUnsubscribe\n\n"<<endl;
    ytchannel.unsubscribe();
    ytchannel.publishVideo("OOP Basics");
    for(int i = 0;i<20;i++){
        ytchannel.subscribe();
    }

    cout<<"\n\nYour Youtube Channel\n\n"<<endl;
    ytchannel.set_data();
}