# Networking Related

## 计算机网络：自顶向下方法(第四版)

### Chapter 1

#### 1.1

##### 1.1.1

- Hosts(End System) connect each other through communication link and packet switch.
- ISPs follow IP protocol.
- IETF develop RFC.
- IEEE 802 develop Ethernet and WiFi(802.11).
- Internet <-> Intranet

##### 1.1.2

API

##### 1.1.3

#### 1.2

Hosts: 1. Server, 2. Client.

##### 1.2.1

##### 1.2.2

- Access Network: the edge router to connect end system.
- Physical Medium Access: DSL, HFC.
- Up-link, down-link and bi-direction link transmit
- Transmission speed depends on distance, physical link quality, electromagnetic disturb and other factors
- LAN. Edge router chooses path for hosts not in LAN.
- Wireless LAN: base stations are within 100 meters.
- 3G: EVDO, HSDPA

##### 1.2.3

UTP.

#### 1.3

##### 1.3.1

- Circuit Switch: establish a connected status(circuit). Used in phone not Internet. TDM(1 frame divided to slots, each circuit has one slot), FDM(bandwidth).
- Packet Switch: best effort.
- Message: combined by several packet.
- Packet switch: i.e. router and link-layer switch.
- Store-and-forward transmission: get all packet before transmit. Has a delay.
- Buffer = queue. A queue delay. May cause packet loss.
- Statistical multiplexing.

##### 1.3.2

- Router has a forwarding table. It check IP address of packets
- [www.traceroute.org](https://www.net.princeton.edu/traceroute.html)

##### 1.3.3

- tier-1 ISP: Internet backbone. connect with other tier-1 ISP.
- tier-2 ISP: customer of tier-1 ISP, which is provider.
- When two ISPs connected, they are peer to each other.
- POP: the point where two ISPs connected. Is a group of routers.

#### 1.4

##### 1.4.1

Total nodal delay: Nodal processing, queuing, transmission( L(bit)/R(bps) ), propagation( d(m)/s(m/s) ).

##### 1.4.2

Traffic intensity: La/R. a(pkt/s)

##### 1.4.3

Traceroute: send a packet to a destination and get the time that reach every router. Repeat 3 times.  GUI: PingPlotter.

##### 1.4.4

Instantaneous/average throughput: F/T bps.

#### 1.5

Protocol stack:

1. Physical: IEEE 802.3u. Bit.
1. Link: Ethernet, WiFi, PPP. Frame.
1. Network: IP. Datagram.
1. Transport: TCP, UDP. Segment.
1. Application: HTTP, SMTP, FTP. Message.

Host has all five, switch has last two, router has last three.

OSI:

- Layer 1: Physical Layer
- Layer 2: Data Link Layer
- Layer 3: Network Layer
- Layer 4: Transport Layer
- Layer 5: Session Layer (divide and sync)
- Layer 6: Presentation Layer (Data compression and encryption)
- Layer 7: Application Layer

Encapsulation.

Payload field.

#### 1.6

- Malware, botnet, virus,
- DoS, DDoS,
- Packet sniffer(Ethereal),
- IP spoofing,
- man-in-middle attack.

#### 1.7

- ARPAnet, ALOHAnet,
- BITNET, CSNET,
- DNS,
- WWW: HTML, HTTP, Server, browser.
- ICQ, P2P
- Skype, YouTube, PPLive,
- Napster, BitTorrent, Skype, Neflix.

#### 1.8

#### Chapter 1 Exercise

Problem 16: `traceroute -q 20 www.eurecom.fr`

Ethereal/ Wireshark: packet sniffer.

### Chapter 2

#### 2.1

##### 2.1.1

Application architecture:

1. Client-server architecture: server farm(infrastructure intensive).
2. P2P architecture: self-scalability.

##### 2.1.2

- Process.
- Socket: API.

##### 2.1.3

1. Reliable data transfer or loss-tolerant application
2. Throughput: bandwidth-sensitive app or elastic app
3. delay
4. security

##### 2.1.4

- TCP: handshake, bi-direct connection, reliable.
- SSL: TCP with security.
- UDP: no connection, not reliable,
- APP protocols.
- IP address and port: to find process. `www.iana.org`

##### 2.1.5

App-layer protocol: HTTP, SMTP

1. request and response packet.
1. grammar and fields.
1. send rules.

##### 2.1.6

#### 2.2

##### 2.2.1

- Web page.
- Object.
- URL: 1. server host name 2. object path name.
- HTTP use TCP: a request, a response.
- HTTP is a stateless protocol.

##### 2.2.2

- Non-persistent/persistent connection.
- HTTP use persistent connection with pipeline by default. Disconnect after a timeout.
- Client sends out packets from 80, and server receives them from a default port.
- RTT: first two hand shakes.
- Request to receive time: 2 RTT + t trans

##### 2.2.3

HTTP request packet: request line, header line(several lines), entity body.

- GET: entity body is empty. ?var1&va2 to send query.
- POST.
- HEAD: server return a packet without objects.
- PUT: upload objects.
- DELETE.

HTTP response packet: status line, 6 header lines, entity body.

Last-modified: cache.

Status code:

- 200 ok.
- 301 moved to URL.
- 400 bad request. Server cannot understand.
- 404 not found.
- 505 HTTP version not support.

Telnet:

```cmd
telnet www.columbia.edu 80
GET http://www.columbia.edu/
```

##### 2.2.4

cookie: RFC 2109. Lies in HTTP request, response headers. Also a file in clients, and a record in server database.

##### 2.2.5

Web cache: a proxy server. Work as both server and client.

##### 2.2.6

Condition GET:

- Last-Modified: date
- If-modify-since: date

#### 2.3

FTP: a control and a data connection. Store the state of user. Data connection break after each transmitting.

FTP: out-of-band, HTTP: in-band.

FTP commands:

```cmd
USER username
PASS password
LIST # file list transmits through data connection
RETR filename
STOR filename
```

FTP response:

- 331: username okay, need password
- 125: start transfer
- 425: cannot open data connection
- 452: error write file

#### 2.4

SMTP(!!skip!!)

#### 2.5

##### 2.5.1

- Hostname and IP address.
- DNS: App layer protocol.
- DNS server: distributed servers running BIND.
- Host aliasing <=> canonical hostname.
- Load distribution: rotate send the host list.

##### 2.5.2

- `host www.google.com` to see host ips.
- DNS look-up request send through UDP on port 53.
- Centralize Design cons: single point of failure, traffic volume, distant centralized database, maintenance.
- Host -> Local DNS -> Root DNS -> TLD DNS -> Authoritative DNS.
- DHCP
- Recursive query and iterative query.
- DNS cache.

##### 2.5.3

- DNS servers keep RR (record host <-> IP).
- RR: Name, Value, Type, TTL.
- TTL decide when RR should be deleted.
- Type: what name and value mean.
  - A: relay1.bar.foo.com 145.37.93.126, A
  - NS: foo.com dns.foo.com, NS. Also contain a A RR for the dns.
  - CNAME: foo.com relay1.bar.foo.com, CNAME. The canonical hostname.
  - MX: foo.com mail.bar.foo.com, MX. Canonical name for mail service.

DNS request and response packet:

| Identification | Flags | Comment |
|:---:|:---:|:---:|
|Number of questions|Number of answer RRs| 12 bytes |
|Number of authority RRs|Number of additional RRs | |
|Questions(variable number of questions)| | Name, type fields for a query |
|Answers(variable number of resource records)| | RRs in response to query |
|Authority(variable number of resource records)| | Records for authoritative servers |
|Additional information(variable number of resource records)| | Additional “helpful” info that may be used |

Identification used to pair the request and response.

Flags: Request/Response, Authoritative, Recursive.

`nslookup` to send a request.

Network Solution, ICANN

DDoS

#### 2.6

P2P(!!skip!!)

#### 2.7

TCP:

- Server socket: after accept(), create a connection socket.
- Reliable byte-stream service.

#### 2.8

UDP:

- Need include source in every packet.
- No stream.
- DatagramSocket, InetAddress, DatagramPacket.
- No need to run server first.

```java
byte[] receiveData = new byte[1024];  # need same or larger than sendData
DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length());
clientSocket.receive(receivePacket);
String str = receivePacket.getData();
```

#### 2.9

#### Chapter 2 Exercise

(!!skip!!)

### Chapter 3

#### 3.1

Segment

##### 3.1.1

##### 3.1.2

- IP: best-effort delivery service, unreliable service.
- Host have one or more IP address.
- Transport-layer multiplexing, demultiplexing.
- TCP: congestion control.

#### 3.2

- Socket connect to process, has a unique identity (Port).
- Transport segment head has fields that define which socket to use.
- Demultiplexing: find the right socket.
- Multiplexing: generate the head.
- Port: 16 bit.
- Well-known port: 0~1023. RFC 1700 and `www.iana.org`.
- Source port is also include in the TCP segment to receive response.
- UDP send two packets come from different source to one socket if they have same destination.
- TCP send two packets to different sockets if they have different source.

- Slammer worm.
- Port scan: `nmap` [link](https://nmap.org/)

- Web server only use one process, but use a thread for each socket.

#### 3.3

- UDP: RFC 768. Only multiplex and error detect over IP.
- UDP header 8 bytes.
- TCP header 20 bytes.
- NFS, RIP, SNMP, DNS protocol: UDP.

##### 3.3.1

UDP header: source port, destination port, length, checksum.

##### 3.3.2

checksum(!!skip!!)

#### 3.4

- Reliable data transfer protocol: data transmit in order.
- Bidirectional transfer: similar to Unidirectional data transfer.
- RDT <-> UDT.

##### 3.4.1

- finite-state machine: FSM is good when describe protocol.
  - which state
  - what happen/what to do

- Positive(ACK)/negative(NAK) acknowledgement.
- Automatic Repeat reQuest (ARQ).
- Stop and wait: When wait for ACK, cannot rdt_send() at the same time.

- Bit recover is rely on no packet loss.

- Duplicate packet: If ACK/NAK lost/corrupted, then retransmit the packet.
- Use sequence number. 1 bit is enough in stop-and-wait protocol.

- Duplicate ACK: use as NAK.
- Need a Counter Timer.

##### 3.4.2

RTT

Utilization: U = L/R / (RTT + L/R)

Pipeline: need cache.

##### 3.4.3

Go-Back-N (GBN):

- base: fist haven't ack.
- nextseqnum: fist haven't sent.
- N: window size.
- Sliding-window protocol.

TCP sequence number is count by byte.

Cumulative acknowledgment.

Event-based programming.

##### 3.4.4

Selective Repeat (SR): ack those duplicate packets as well.

Window size should smaller or equal to half of the sequence size. Otherwise cannot detect if a packet is a retransmitted or a new packet.

TCP packet life is 3 minute.

#### 3.5

TCP: RFC 793, 1122, 1323, 2018, 2581.

##### 3.5.1

TCP:

- connection-oriented.
- Not Virtual Circuit, because the status stores in hosts.
- Full-duplex service.
- Point to point.
- Cannot broadcast.
- Three-way handshake: the last one from client can have load.
- Send buffer: is set at the begining of three-way handshake.
- Maximum Segment Size (MSS), related to MTU.

##### 3.5.2

TCP header: source and destination port (16 bit),sequence number (32 bit), acknowledgement number (32 bit), header length (4 bit), unuse (2 bit), flags (6 bit), receive window (16 bit), checksum (16 bit), ugerent data pointer (16 bit), options filed (MSS and a timestamp).

flags:

- URG: the data before ugerent data pointer is ugerent (not use).
- ACK: the packet contain an ACK.
- PSH: receiver should pass the data to app at once (not use).
- RST
- SYN
- FIN

Normally is 20 byte, length is changeable.

ACK number is the sequence number of next byte.

TCP is cumulative acknowledge.

When receive disorder packet, TCP doesn't define what to do. Normally keep it.

The initial sequence number is random on both receiver and sender.

Telnet: remote access. Not as safe as SSL.

- Echo back.
- Piggybacked.
- Only 1 byte data.

##### 3.5.3

Timeout must larger than RTT.

Estimate sampleRTT(!!skip!!)

3 ACKs for a duplicated packet means NAK, need fast retransmit rather than waiting timeout.

##### 3.5.4

RDT.

Use single time counter to save costs.

Events: 1. Get data from App layer; 2. Timeout; 3. Receive ACK.

- If ACK sequence number > SendBase, update SendBase, and reset timer.
- If timeout, only retransmit the packet with the smallest sequence number.
- Selective acknowledgement.

Double timeout: when timeout happens, double the timeout interval after retransmit.

Fast retransmit: receive 3 duplicate ACK (means 4 ACK for a same packet).

- Why not use 2: send p1, p2 in pipeline. A1 and A2 received after timeout. At this time p1 retransmit and receive A2. For p1 another A2b is also received. No need to retransmit. ??
- Delay ACK: wait for 500ms after receive a packet. If no new in-order packet received, send ACK.
- If receive a packet that is forhead ??

##### 3.5.5

Flow-control service: avoid receiver buffer overflow.  Not congestion control.

Receive window: RcvWindow = RcvBuffer - (LastByteRcvd - LastByteRead) >= LastByteSent - LastByteAcked

When receive'sr buffer full, sender keep sending 1 byte packets.

##### 3.5.6

Three-way Handshake:

- client send SYN packet, with client_isn. SYN set 1.
- server send SYNACK packet with client_isn + 1 and server_isn. SYN set 1.
- client send payload packet with server_isn + 1. SYN set 0.

Both client and server can terminate connection.

- first one send a FIN packet and wait for ACK. Then ack the FIN packet from the second one.
- Wait for 30s before close. in total four packets.

SYN flood attack.

If server receive a SYN packet from a port that it is not open, send RST packet.

If it is a UDP packet, send back ICMP packet.

`nmap` send TCP packets to scan ports. If those packets are not blocked by firewall.

#### 3.6

- ATM: Asynchronize transmit mode.
- ABR: Available bit rate.

##### 3.6.1

Offered load.

(!!skip!!)

##### 3.6.2

Control congestion:

- host to host control: host detect congestion by detect packet loss.
- network assist: router send a choke packet (1 byte) to sender. or add info in packets that send to receiver.

##### 3.6.3

ATM ABR.

(!!skip!!)

#### 3.7

TCP Reno congestion control algorithm.

(!!skip!!)

#### 3.8

- DCCP
- SCTP
- TFRC

#### Chapter 3 Exercise

### Chapter 4

**HERE**: Continue from here.

## IPV4

### multicast addressing

classes IP addresses for IPv4

- based on first several bits in IP addresses
- Class A-C are unicast addresses.
- class A: first bit is 0, i.e. 0.0.0.0 - 127.255.255.255
- class B: start with 10, 128.0.0.0 - 191.255.255.255
- class C: start with 110, 192.0.0.0 - 223.255.255.255
- multicast address: 1110, 224.0.0.0 - 239.255.255.255
- Reversed:  11110, 240.0.0.0 - 247.255.255.255

Private IPv4 address spaces

- 24-bit block: 10.0.0.0 - 10.255.255.255, 10.0.0.0/8, single class A network
- 20-bit block: 172.16.0.0 - 172.31.255.255, 172.16.0.0/12, 16 contiguous class B networks
- 16-bit block: 192.168.0.0 - 192.168.255.255, 192.168.0.0/16, 256 contiguous class C networks

## IPV6

128-bit addresses. E.g. 2001:0db8:0000:0042:0000:8a2e:0370:7334

hierarchical address allocation method: route aggregation.

The use of multicast addressing is expanded and simplified

## Fiddler

Fiddler add a filter:

- Right window : Filters.
- Right click the previous response.

Fiddler decrept HTTPS traffic:

- [Block all HTTPS traffic if not provide cert](https://www.telerik.com/forums/fiddler-blocks-all-other-websites)
- Actions button on Fiddler's Tools > Fiddler Options > HTTPS
- [Only decrept for certain hosts](http://docs.telerik.com/fiddler/Configure-Fiddler/Tasks/DecryptHTTPS)

## HTTPS

[HTTPS intro](https://love2dev.com/blog/how-https-works/)

- Wraps an encrypted layer around HTTP.
- HTTP: async communicate protocol.
  1. init a connection
  2. data passed between server and client are through TCP with multi round trips
  3. TCP slow start: first packet size is 16kb, keep doubling on success until 4MB or the bandwidth of the client reachs
- Use TLS to encrypt. It has replaced SSL. Its certs are free.
  - a cert is a public key with the id of the owner.
  - TLS cert is installed on server.
  - public and private keys are stored on server.
  - Based on public/private-key cryptography: public key is used for encryption, private key is for decryption.
  - There is also a list of endpoints in SSL cert? [More details](https://docs.microsoft.com/en-us/archive/blogs/jpsanders/troubleshooting-asp-net-the-remote-certificate-is-invalid-according-to-the-validation-procedure). To fix: `ServicePointManager.ServerCertificateValidationCallback += (sender, cert, chain, policyErrors) => true;`
- HTTPS Handshake
  1. browser connect to an HTTPS server with a SYNC
  2. server returns a SYNC ACK
  3. brower sends an ACK + client hello
  4. server answers a server hello + the cert with public key
  5. browser checks 1. the owner matches the server, 2. the cert is signed by a trusted authority
  6. brower and server exchange a secret, which means both sides send others a public key and keep a private key??
  7. then start communicate with app data and encrypted with public keys
  8. only the domain is not encrypted. Even the full URL is encrypted.

[Youtube: How SSL certificate works?](https://youtu.be/33VYnE7Bzpk)

- SSL cert: used by web servers, issued and signed by by 3rd-party (CA). It can be used to verify the identity of the web server and its public key.
- flow:
  1. brower sends the HTTPS request
  2. server sends its public key and its SSL cert
  3. browser verifies the cert's signature by requesting the CA: the signature is created by CA's private key. CA's public key is pre-installed by the browser
  4. browser creates a symmetric key/a shared secret
  5. brower uses the server's public key to encrypt one symmetric key and send to server
  6. server uses its private key to decrypt the browser's symmetric key
  7. all the traffic then are encrypted and decrypted with the symmetric key

[Youtube: Private Key Encryption (Symmetric Key Encryption)](https://www.youtube.com/watch?v=vk3py9M2IfE&list=PLSNNzog5eyduN6o4e6AKFHekbH5-37BdV)

- both sender and receiver have the private key
- sender encrypt the message using the key and output scrambled data
- receiver decrypt the scrambled data with the same key and output the original message
- 2 encryption methods
  - Stream cypher: bit by bit encryption on the fly. One implementation: RC4
  - Block cypher: encrypt data in certain length. Implementations: DES, RC5, AES

[Youtube: Public Key Encryption (Asymmetric Key Encryption)](https://www.youtube.com/watch?v=8I7BNgD2Yag)

- public key and private key are mathematically related
- only the creator has the private key
- receiver creates a pair of keys
- cannot verify the sender's identity, so need use digital signature

[Youtube: What is digital signature?](https://www.youtube.com/watch?v=TmA2QWSLSPg&list=PLSNNzog5eydtwsdT__t5WtRgvpfMzpTc7)

- Can be used to 1. AuthN the sender, 2. non-repudiation: sender cannot deny that the message has sent, 3. integrity: the message was not altered in transit
- Sender generates public key and private key pair
- Sender sends the public key to receiver (or store in a public place and tell the receiver where)
- Sender encrypts the digest of the content (a hash value of the content) with private key, which generates a digital signature
- Sender sends both the content (note it is not encrypted) and the signature to the receiver
- Receiver decrypts the signature with the public key, and compare with the digest

[Youtube: Why digital certificate?](https://www.youtube.com/watch?v=UbMlPIgzTxc)

- Digital signature cannot prevent hacker (man-in-the-middle-attack) to read the message because the public key is stored in a public place.
- Hacker can also replace the file using his private key and change the public key to pretent he is the sender.
- Digital cert is issued by a trusted 3rd-party. It can verify the identity of the owner and the owner owns the public key.
- Sender sends the public key with the cert to the receiver.
- Cert contains 1. owner's name, 2. owner's public key and its expiration date, 3. issuer's name, 4. issuer's signature.

[Public Key Certificate](https://en.wikipedia.org/wiki/Public_key_certificate)

- used to prove the ownership of a public key
- subject: identity of the owner
- cert contains a public key, the subject and the issuer's digital signature
- In a typical Public-key Infrastructure (PKI) schema, issuer is a CA.
- Most common cert is defined by X.509
- For SSL Server cert, the cert path validation algorithm does: 1. validate the primary host name (listed as Common Name) in the subject matches the host name, 2. the cert is signed by a trusted CA
- Chain of trust: End-entity cert is referenced by an intermediate cert, which is referenced by a root cert. The root cert's signature is self-signed by root CA.
- Common field:
  - Serial Number: uniq id of a cert
  - Subject
  - Issuer
  - Not Before, Not After
  - Key Usage, Extended Key Usage
  - Public Key
  - Signature Algorithm: the algorithm used to sign the cert
  - Signature
- Certificate authorities: 1. serve cert signing request by vailidate info and provide certs, 2. maintain certs' revation info

[X.509 Cert thumbprint](https://morgansimonsen.com/2013/04/16/understanding-x-509-digital-certificate-thumbprints/)

- thumbprint is a computed field, i.e. not a part of the certificate data itself.
- Windows always uses SHA1 to calculate the thumbprint hash apon the whole certificate.

[server certificate is not configured properly with HTTP.SYS in the HTTPS case](https://stackoverflow.com/questions/2013880/wcf-error-this-could-be-due-to-the-fact-that-the-server-certificate-is-not-conf)

## Certificate

[Make a certificate for testing purposes](https://stackoverflow.com/questions/68948910/make-a-certificate-for-testing-purposes-but-not-self-signed)

- a real cert is associated with a domain.
- a domain can have a subdomain with a cert for the subdomain.
- local testing can use a self-signed cert.

<https://learn.microsoft.com/en-us/iis/configuration/system.webserver/security/authentication/clientcertificatemappingauthentication>

<https://www.thewindowsclub.com/create-self-signed-ssl-certificates-in-windows-10>

## Other notes

[No buffer space available](https://community.sophos.com/products/unified-threat-management/f/management-networking-logging-and-reporting/31186/105-no-buffer-space-available)

[on ubuntu](https://ubuntuforums.org/showthread.php?t=1880804)

[explaination](https://serverfault.com/questions/614453/no-buffer-space-available-on-connect)

[might related to SKB](http://vger.kernel.org/~davem/skb_data.html)

[south and north](https://networkengineering.stackexchange.com/questions/18873/what-is-the-meaning-origin-of-the-terms-north-south-and-east-west-traffic)

[Setting two routers](https://www.lifewire.com/connect-routers-on-a-home-network-818060)

linux ephemeral ips

[Route table](https://www.howtogeek.com/22/adding-a-tcpip-route-to-the-windows-routing-table/)

<https://communityforums.atmeta.com/t5/Get-Help/My-Oculus-Quest-2-won-t-connect-to-my-5GHz-wifi/td-p/1117790>

- Wifi 6 frequency can causing Quest 2 not working
