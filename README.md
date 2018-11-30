
<b>#BitcoinReal Specification</b>

Coin Name : Bitcoin Real

Ticker : BR

Coin Type : POS 

Block Time : 60 Sec Approx

Confirmations : 15

Masternode Confirmations : 15

Minimum coins required for staking: 100
 
POS Maturity Time: 2 hours

Total Coin Supply: 10,000,000,000

P2P Port: 33888

RPC Port: 6082



<b> Build Instructions Linux </b>

sudo apt-get install build-essential libtool autotools-dev automake pkg-config bsdmainutils python3 -y

sudo apt-get install libssl-dev libevent-dev libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-test-dev libboost-thread-dev -y

sudo apt-get install software-properties-common

sudo add-apt-repository ppa:bitcoin/bitcoin

sudo apt-get update

sudo apt-get install libdb4.8-dev libdb4.8++-dev libminiupnpc-dev libzmq3-dev libboost-all-dev -y

  ./autogen.sh
  
  ./configure --disable-tests --disable-bench
  
  make
  
  strip ./bitcoinreald
  
  strip ./bitcoinreal-cli`
