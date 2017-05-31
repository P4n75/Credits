// Copyright (c) 2009-2017 Satoshi Nakamoto
// Copyright (c) 2009-2017 The Bitcoin Developers
// Copyright (c) 2014-2017 The Dash Core Developers
// Copyright (c) 2017 Credits Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *credits_strings[] = {
QT_TRANSLATE_NOOP("credits", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("credits", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("credits", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("credits", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("credits", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("credits", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("credits", ""
"Cannot obtain a lock on data directory %s. Credits is probably already "
"running."),
QT_TRANSLATE_NOOP("credits", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("credits", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("credits", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("credits", ""
"PrivateSend uses exact denominated amounts to send funds, you might simply need "
"to anonymize some more coins."),
QT_TRANSLATE_NOOP("credits", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("credits", ""
"Disable all Credits specific functionality (Masternodes, PrivateSend, InstantSend, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("credits", ""
"Enable InstantSend, show confirmations for locked transactions (bool, default: "
"%s)"),
QT_TRANSLATE_NOOP("credits", ""
"Enable use of automated privatesend for funds stored in this wallet (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("credits", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("credits", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("credits", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("credits", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("credits", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("credits", ""
"Fees (in CRDS/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("credits", ""
"Fees (in CRDS/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("credits", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("credits", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("credits", ""
"InstantSend requires inputs with at least 10 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("credits", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("credits", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("credits", ""
"Name to construct url for KeePass entry that stores the wallet passphrase"),
QT_TRANSLATE_NOOP("credits", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("credits", ""
"Provide liquidity to PrivateSend by infrequently mixing coins on a continual "
"basis (0-100, default: %u, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("credits", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("credits", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("credits", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("credits", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("credits", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("credits", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("credits", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("credits", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("credits", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("credits", ""
"To use creditsd, or the -server option to credits-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=creditsrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Credits Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("credits", ""
"Unable to bind to %s on this computer. Credits is probably already running."),
QT_TRANSLATE_NOOP("credits", ""
"Unable to locate enough PrivateSend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("credits", ""
"Unable to locate enough PrivateSend non-denominated funds for this transaction "
"that are not equal 1000 CRDS."),
QT_TRANSLATE_NOOP("credits", ""
"Unable to locate enough funds for this transaction that are not equal 1000 "
"CRDS."),
QT_TRANSLATE_NOOP("credits", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("credits", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("credits", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("credits", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Credits will not work properly."),
QT_TRANSLATE_NOOP("credits", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("credits", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("credits", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("credits", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("credits", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("credits", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("credits", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("credits", "(31000 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("credits", "(default: %s)"),
QT_TRANSLATE_NOOP("credits", "(default: 1)"),
QT_TRANSLATE_NOOP("credits", "(must be 31000 for mainnet)"),
QT_TRANSLATE_NOOP("credits", "<category> can be:\n"),
QT_TRANSLATE_NOOP("credits", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("credits", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("credits", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("credits", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("credits", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("credits", "Already have that input."),
QT_TRANSLATE_NOOP("credits", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("credits", "Block creation options:"),
QT_TRANSLATE_NOOP("credits", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("credits", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("credits", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("credits", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("credits", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("credits", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("credits", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("credits", "Cannot write default address"),
QT_TRANSLATE_NOOP("credits", "Collateral not valid."),
QT_TRANSLATE_NOOP("credits", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("credits", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("credits", "Connect to KeePassHttp on port <port> (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("credits", "Connection options:"),
QT_TRANSLATE_NOOP("credits", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("credits", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("credits", "Copyright (C) %i Cedits Developers"),
QT_TRANSLATE_NOOP("credits", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("credits", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("credits", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("credits", "PrivateSend is idle."),
QT_TRANSLATE_NOOP("credits", "PrivateSend options:"),
QT_TRANSLATE_NOOP("credits", "PrivateSend request complete:"),
QT_TRANSLATE_NOOP("credits", "PrivateSend request incomplete:"),
QT_TRANSLATE_NOOP("credits", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("credits", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("credits", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("credits", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("credits", "Done loading"),
QT_TRANSLATE_NOOP("credits", "Enable the client to act as a Masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("credits", "Entries are full."),
QT_TRANSLATE_NOOP("credits", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("credits", "Error initializing block database"),
QT_TRANSLATE_NOOP("credits", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("credits", "Error loading block database"),
QT_TRANSLATE_NOOP("credits", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("credits", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("credits", "Error loading wallet.dat: Wallet requires newer version of Credits"),
QT_TRANSLATE_NOOP("credits", "Error opening block database"),
QT_TRANSLATE_NOOP("credits", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("credits", "Error recovering public key."),
QT_TRANSLATE_NOOP("credits", "Error"),
QT_TRANSLATE_NOOP("credits", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("credits", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("credits", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("credits", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("credits", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("credits", "Error: You already have pending entries in the PrivateSend pool"),
QT_TRANSLATE_NOOP("credits", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("credits", "Failed to read block"),
QT_TRANSLATE_NOOP("credits", "Fee (in CRDS/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("credits", "Finalizing transaction."),
QT_TRANSLATE_NOOP("credits", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("credits", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("credits", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("credits", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("credits", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("credits", "Importing..."),
QT_TRANSLATE_NOOP("credits", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("credits", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Incompatible mode."),
QT_TRANSLATE_NOOP("credits", "Incompatible version."),
QT_TRANSLATE_NOOP("credits", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("credits", "Information"),
QT_TRANSLATE_NOOP("credits", "Initialization sanity check failed. Credits is shutting down."),
QT_TRANSLATE_NOOP("credits", "Input is not valid."),
QT_TRANSLATE_NOOP("credits", "InstantSend options:"),
QT_TRANSLATE_NOOP("credits", "Insufficient funds."),
QT_TRANSLATE_NOOP("credits", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("credits", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("credits", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("credits", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("credits", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("credits", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("credits", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("credits", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("credits", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("credits", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("credits", "Invalid private key."),
QT_TRANSLATE_NOOP("credits", "Invalid script detected."),
QT_TRANSLATE_NOOP("credits", "KeePassHttp id for the established association"),
QT_TRANSLATE_NOOP("credits", "KeePassHttp key for AES encrypted communication with KeePass"),
QT_TRANSLATE_NOOP("credits", "Keep N CRDS anonymized (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Last PrivateSend was too recent."),
QT_TRANSLATE_NOOP("credits", "Last successful PrivateSend action was too recent."),
QT_TRANSLATE_NOOP("credits", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Line: %d"),
QT_TRANSLATE_NOOP("credits", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("credits", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("credits", "Loading addresses..."),
QT_TRANSLATE_NOOP("credits", "Loading block index..."),
QT_TRANSLATE_NOOP("credits", "Loading budget cache..."),
QT_TRANSLATE_NOOP("credits", "Loading Masternode cache..."),
QT_TRANSLATE_NOOP("credits", "Loading Masternode payment cache..."),
QT_TRANSLATE_NOOP("credits", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("credits", "Loading wallet..."),
QT_TRANSLATE_NOOP("credits", "Lock is already in place."),
QT_TRANSLATE_NOOP("credits", "Lock Masternodes from Masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Masternode options:"),
QT_TRANSLATE_NOOP("credits", "Masternode queue is full."),
QT_TRANSLATE_NOOP("credits", "Masternode:"),
QT_TRANSLATE_NOOP("credits", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Missing input transaction information."),
QT_TRANSLATE_NOOP("credits", "Mixing in progress..."),
QT_TRANSLATE_NOOP("credits", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("credits", "No Masternodes detected."),
QT_TRANSLATE_NOOP("credits", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("credits", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("credits", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("credits", "Node relay options:"),
QT_TRANSLATE_NOOP("credits", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("credits", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("credits", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("credits", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("credits", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("credits", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("credits", "Options:"),
QT_TRANSLATE_NOOP("credits", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("credits", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("credits", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("credits", "RPC server options:"),
QT_TRANSLATE_NOOP("credits", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("credits", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("credits", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("credits", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("credits", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("credits", "Rescanning..."),
QT_TRANSLATE_NOOP("credits", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("credits", "Send trace/debug info to debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("credits", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("credits", "Session not complete!"),
QT_TRANSLATE_NOOP("credits", "Session timed out."),
QT_TRANSLATE_NOOP("credits", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("credits", "Set external address:port to get to this Masternode (example: %s)"),
QT_TRANSLATE_NOOP("credits", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("credits", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Set the Masternode private key"),
QT_TRANSLATE_NOOP("credits", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("credits", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("credits", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("credits", "Signing failed."),
QT_TRANSLATE_NOOP("credits", "Signing timed out."),
QT_TRANSLATE_NOOP("credits", "Signing transaction failed"),
QT_TRANSLATE_NOOP("credits", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("credits", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("credits", "Specify data directory"),
QT_TRANSLATE_NOOP("credits", "Specify Masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("credits", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("credits", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("credits", "Specify your own public address"),
QT_TRANSLATE_NOOP("credits", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Submitted following entries to Masternode: %u / %d"),
QT_TRANSLATE_NOOP("credits", "Submitted to Masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("credits", "Submitted to Masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("credits", "Synchronization failed"),
QT_TRANSLATE_NOOP("credits", "Synchronization finished"),
QT_TRANSLATE_NOOP("credits", "Synchronization pending..."),
QT_TRANSLATE_NOOP("credits", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("credits", "Synchronizing Masternode winners..."),
QT_TRANSLATE_NOOP("credits", "Synchronizing Masternodes..."),
QT_TRANSLATE_NOOP("credits", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("credits", "This help message"),
QT_TRANSLATE_NOOP("credits", "This is experimental software."),
QT_TRANSLATE_NOOP("credits", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("credits", "This is not a Masternode."),
QT_TRANSLATE_NOOP("credits", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Transaction amount too small"),
QT_TRANSLATE_NOOP("credits", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("credits", "Transaction created successfully."),
QT_TRANSLATE_NOOP("credits", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("credits", "Transaction not valid."),
QT_TRANSLATE_NOOP("credits", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("credits", "Transaction too large"),
QT_TRANSLATE_NOOP("credits", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("credits", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("credits", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("credits", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("credits", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("credits", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("credits", "Use KeePass 2 integration using KeePassHttp plugin (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Use N separate Masternodes to anonymize funds  (2-8, default: %u)"),
QT_TRANSLATE_NOOP("credits", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("credits", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("credits", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("credits", "Use the test network"),
QT_TRANSLATE_NOOP("credits", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("credits", "Value more than PrivateSend pool maximum allows."),
QT_TRANSLATE_NOOP("credits", "Verifying blocks..."),
QT_TRANSLATE_NOOP("credits", "Verifying wallet..."),
QT_TRANSLATE_NOOP("credits", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("credits", "Wallet is locked."),
QT_TRANSLATE_NOOP("credits", "Wallet needed to be rewritten: restart Credits to complete"),
QT_TRANSLATE_NOOP("credits", "Wallet options:"),
QT_TRANSLATE_NOOP("credits", "Wallet window title"),
QT_TRANSLATE_NOOP("credits", "Warning"),
QT_TRANSLATE_NOOP("credits", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("credits", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("credits", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("credits", "Will retry..."),
QT_TRANSLATE_NOOP("credits", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("credits", "Your entries added successfully."),
QT_TRANSLATE_NOOP("credits", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("credits", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("credits", "on startup"),
QT_TRANSLATE_NOOP("credits", "wallet.dat corrupt, salvage failed"),
};