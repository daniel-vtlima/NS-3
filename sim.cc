#include "ns3/netanim-module.h"
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/applications-module.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("First Script Example");

int main( int argc, char *argv[] )
{
	Time::SetResolution(Time::NS);
	LogComponentEnable("UdpEchoClientApplication", LOG_LEVEL_INFO);
	LogComponentEnable("UdpEchoServerApplication", LOG_LEVEL_INFO);


	NodeContainer nodes;
	uint32_t nNodes = 18;
	nodes.Create(nNodes);

	InternetStackHelper stack;
	stack.Install(nodes);
	
//Definindo os Nós
	PointToPointHelper p650;
	p650.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p650.SetChannelAttribute("Delay", StringValue("0.0742ms"));

	PointToPointHelper p632;
	p632.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p632.SetChannelAttribute("Delay", StringValue("0.0742ms"));
	
	PointToPointHelper p645;
	p645.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p645.SetChannelAttribute("Delay", StringValue("0.0742ms"));

	PointToPointHelper p646;
	p646.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p646.SetChannelAttribute("Delay", StringValue("0.0742ms"));

	PointToPointHelper p633;
	p633.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p633.SetChannelAttribute("Delay", StringValue("0.0742ms"));

	PointToPointHelper p634;
	p634.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p634.SetChannelAttribute("Delay", StringValue("0.0742ms"));

	PointToPointHelper r1;
	r1.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	r1.SetChannelAttribute("Delay", StringValue("0.2432ms"));

	PointToPointHelper g;
	g.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	g.SetChannelAttribute("Delay", StringValue("0.15082ms"));

	PointToPointHelper p692;
	p692.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p692.SetChannelAttribute("Delay", StringValue("0.2252ms"));

	PointToPointHelper p675;
	p675.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p675.SetChannelAttribute("Delay", StringValue("0.2252ms"));

	PointToPointHelper r7;
	r7.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	r7.SetChannelAttribute("Delay", StringValue("0.29502ms"));

	PointToPointHelper r6;
	r6.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	r6.SetChannelAttribute("Delay", StringValue("0.07478ms"));

	PointToPointHelper r8;
	r8.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	r8.SetChannelAttribute("Delay", StringValue("0.029224ms"));

	PointToPointHelper p671;
	p671.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p671.SetChannelAttribute("Delay", StringValue("0.0992ms"));

	PointToPointHelper p684;
	p684.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p684.SetChannelAttribute("Delay", StringValue("0.1982ms"));

	PointToPointHelper p680;
	p680.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p680.SetChannelAttribute("Delay", StringValue("0.1473ms"));

	PointToPointHelper p652;
	p652.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p652.SetChannelAttribute("Delay", StringValue("0.1473ms"));

	PointToPointHelper p611;
	p611.SetDeviceAttribute("DataRate", StringValue("100Mbps"));
	p611.SetChannelAttribute("Delay", StringValue("0.1473ms"));

	Ipv4AddressHelper address;
	NetDeviceContainer devices;
	Ipv4InterfaceContainer interfaces;
	
//Conexões com o AP
	devices = p650.Install(nodes.Get(0), nodes.Get(1));
	address.SetBase("10.1.1.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = p650.Install(nodes.Get(0), nodes.Get(2));
	address.SetBase("10.1.2.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = p650.Install(nodes.Get(0), nodes.Get(3));
	address.SetBase("10.1.3.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = p650.Install(nodes.Get(0), nodes.Get(4));
	address.SetBase("10.1.4.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = p650.Install(nodes.Get(0), nodes.Get(5));
	address.SetBase("10.1.5.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = p650.Install(nodes.Get(0), nodes.Get(6));
	address.SetBase("10.1.6.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = p650.Install(nodes.Get(0), nodes.Get(10));
	address.SetBase("10.1.7.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = p650.Install(nodes.Get(0), nodes.Get(12));
	address.SetBase("10.1.8.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = p650.Install(nodes.Get(0), nodes.Get(11));
	address.SetBase("10.1.20.0", "255.255.255.0");
	interfaces.Add(address.Assign(devices));
//R1
	devices = r1.Install(nodes.Get(6), nodes.Get(13));
	address.SetBase("10.1.9.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
//Conexões de G
	devices = g.Install(nodes.Get(7), nodes.Get(8));
	address.SetBase("10.1.10.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = g.Install(nodes.Get(7), nodes.Get(9));
	address.SetBase("10.1.11.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
//R7
	devices = r7.Install(nodes.Get(10), nodes.Get(7));
	address.SetBase("10.1.12.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
//Conexões de R6	
	devices = r6.Install(nodes.Get(11), nodes.Get(15));
	address.SetBase("10.1.13.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = r6.Install(nodes.Get(11), nodes.Get(16));
	address.SetBase("10.1.14.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	devices = r6.Install(nodes.Get(11), nodes.Get(17));
	address.SetBase("10.1.15.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
//R8
	devices.Add(r8.Install(nodes.Get(12), nodes.Get(14)));
	address.SetBase("10.1.17.0", "255.255.255.0");	
	interfaces.Add(address.Assign(devices));
	
	Ipv4GlobalRoutingHelper::PopulateRoutingTables();

	UdpEchoServerHelper echoServer(9);

	ApplicationContainer serverApps = echoServer.Install(nodes.Get(0));
	serverApps.Start(Seconds(0.0));
	serverApps.Stop(Seconds(20.0));

	UdpEchoClientHelper echoClient (interfaces.GetAddress(0), 9);
	echoClient.SetAttribute("MaxPackets", UintegerValue(1));
	echoClient.SetAttribute("Interval",TimeValue(Seconds(0.00007)));
	//echoClient.SetAttribute("PacketSize",UintegerValue(1));//tipo 1 1ms
	//echoClient.SetAttribute("PacketSize",UintegerValue(128));//tipo 2 50ms
	echoClient.SetAttribute("PacketSize",UintegerValue(1024));//tipo 3 100ms

	ApplicationContainer clientApps = echoClient.Install(nodes.Get(9));
	clientApps.Start(Seconds(0.0));
	clientApps.Stop(Seconds(20.0));

	AnimationInterface anim("sim_artigo.xml");
	anim.SetConstantPosition(nodes.Get(0), 0.0, 12.0);
	anim.SetConstantPosition(nodes.Get(1), 0.0, 8.0);
	anim.SetConstantPosition(nodes.Get(2), 1.0, 8.0);
	anim.SetConstantPosition(nodes.Get(3), 2.0, 8.0);
	anim.SetConstantPosition(nodes.Get(4), 2.0, 8.0);
	anim.SetConstantPosition(nodes.Get(5), 3.0, 8.0);
	anim.SetConstantPosition(nodes.Get(6), 0.0, 10.0);
	anim.SetConstantPosition(nodes.Get(7), 1.0, 5.0);
	anim.SetConstantPosition(nodes.Get(8), 3.0, 0.0);
	anim.SetConstantPosition(nodes.Get(9), 4.0, 3.0);
	anim.SetConstantPosition(nodes.Get(10), 2.0, 10.0);
	anim.SetConstantPosition(nodes.Get(11), 2.0, 8.0);
	anim.SetConstantPosition(nodes.Get(12), 3.0, 10.0);
	anim.SetConstantPosition(nodes.Get(13), 3.0, 9.0);
	anim.SetConstantPosition(nodes.Get(14), 4.0, 10.0);
	anim.SetConstantPosition(nodes.Get(15), 4.0, 9.0);
	anim.SetConstantPosition(nodes.Get(16), 4.0, 8.0);
	anim.SetConstantPosition(nodes.Get(17), 5.0, 7.0);

	Simulator::Run();
	Simulator::Destroy();

	return 0;

}
