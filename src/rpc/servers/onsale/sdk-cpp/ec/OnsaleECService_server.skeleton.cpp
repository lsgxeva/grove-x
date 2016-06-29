// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "OnsaleECService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::onsaleEC;

class OnsaleECServiceHandler : virtual public OnsaleECServiceIf {
 public:
  OnsaleECServiceHandler() {
    // Your initialization goes here
  }

  void getUsableOnsaleGroups(UsableOnsaleGroupsRsp& _return, const UsableOnsaleGroupsReq& usableOnsaleGroupsReq) {
    // Your implementation goes here
    printf("getUsableOnsaleGroups\n");
  }

  void getApportion(ApportionRsp& _return, const ApportionReq& apportionReq) {
    // Your implementation goes here
    printf("getApportion\n");
  }

  void getStepInfo(StepInfoRsp& _return, const StepInfoReq& stepInfoReq) {
    // Your implementation goes here
    printf("getStepInfo\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<OnsaleECServiceHandler> handler(new OnsaleECServiceHandler());
  shared_ptr<TProcessor> processor(new OnsaleECServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}
