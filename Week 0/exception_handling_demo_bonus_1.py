from argparse import ArgumentParser
import socket

#    Abertay Programming Society
#    Week 0: Exception Handling Demo (Bonus 1/2)
#   "Doing cool things with exception handling"
#    By Andrew Calder



def is_valid_ipv4_address(address):
    try:
        # Convert an IPv4 address from dotted-quad string format (for example, ‘123.45.67.89’) to 32-bit packed binary format
        socket.inet_aton(address) # Will throw socket.error if ipv4 address is invalid

    except socket.error:
        # Address is invalid
        return False

    # Address is valid
    return True

def is_valid_ipv6_address(address):
    try:
        # effectively aton alternative for ipv6
        socket.inet_pton(socket.AF_INET6, address) # Will throw socket.error if ipv6 address is invalid

    except socket.error:
        # Address is invalid
        return False

    # Address is valid
    return True

# You may want to take a look at:
#   Argparse argument parsing documentation
#   https://docs.python.org/3/howto/argparse.html
#   Socket *lots of things really* documentation
#   https://docs.python.org/3/library/socket.html



if __name__ == "__main__":
    # Wayyyy better than kwargs

    # To run:
    # python3 exception_handling_demo_4.py -ipv 4 -adr 192.168.1.1
    # python3 exception_handling_demo_4.py -ipv 4 -adr 192.168.1.spaghetti
    # or try with -ipv 6, if you fancy...

    parser = ArgumentParser()
    parser.add_argument("-ipv", dest="ip_version",
                        help="Specifies version to check")

    parser.add_argument("-adr", dest="address",
                       help="Specifies IP Address")

    args = parser.parse_args()

    if '4' == args.ip_version:
        print("%s is %svalid ipv4" % (args.address, "" if is_valid_ipv4_address(args.address) else "in"))
    elif '6' == args.ip_version:
        print("%s is %svalid ipv6" % (args.address, "" if is_valid_ipv6_address(args.address) else "in"))
    else:
        print("%s is not a supported ip version" % args.ip_version)
