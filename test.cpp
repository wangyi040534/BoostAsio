#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
void print(const boost::system::error_code)
{
  std::cout << "hello 3" << std::endl;
  }
int main()
{
boost::asio::io_service io;
boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
//t.wait();
t.async_wait(&print);
std::cout << "hello 1" << std::endl;
io.run();
std::cout << "hello 2" << std::endl;
//std::cout<<"hello"<<std::endl;
return 0;
}
