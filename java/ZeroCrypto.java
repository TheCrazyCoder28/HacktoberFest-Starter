interface Crypto{
    String encrypt(String message);
    String decrypt(String message);
    
}
class ZeroCrypto implements Crypto{
	
    public String encrypt(String message){
    	//return without any changes
        return message;
    }
    public String decrypt(String message){
    	//return without any changes
        return message;
    }
    public static void main(String[] args) {
		Crypto c = new ZeroCrypto();
		System.out.println(c.encrypt("Hello World"));
		System.out.println(c.decrypt("Hello World"));
	}
}




