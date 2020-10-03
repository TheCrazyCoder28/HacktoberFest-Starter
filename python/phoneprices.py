def isgoodprice(price, index, prices):
    days = 0
    if index < 4:
        print("Less than 4 false")
        return False
    else:
        while(index > 0):
            if(prices[index - 1] > price):
                index -= 1
                days += 1
                if(days == 5):
                    print("Woohoo...")
                    return True
            else:
                print("Oh noooo")
                return False


def main():
    testcases = int(input(""))
    i = 0
    while(i < testcases):
        good = 1
        days = int(input(""))
        prices = list(map(int, input().split()))
        for index, price in enumerate(prices):
            if(isgoodprice(price, index, prices)):
                good += 1
        print(good)
        i += 1
    return 0


if __name__ == "__main__":
    main()
