void main() {
  var rohan = Account.constr(1998877, 1000);
  rohan.show_balance();
  rohan.deposit(2000);
  rohan.show_balance();
}

class Account {
  int account_number;
  int balance_ammount;

  Account.constr(this.account_number, this.balance_ammount);

  void show_balance() {
    print("A/C no:${this.account_number} and Balance is:${this.balance_ammount}");
  }

  void withdraw(int ammount) {
    this.balance_ammount = this.balance_ammount - ammount;
  }

  void deposit(int ammount) {
    this.balance_ammount = this.balance_ammount + ammount;
  }
}
