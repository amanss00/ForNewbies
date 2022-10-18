public class main {

    public static void main(String[] args) {

//        int count = 1;
//        while (count != 6){
//            System.out.println("Count is " + count);
//            count++;
//        }
//
//        count = 1;
//        while (true){
//            if (count == 6){
//                break;
//            }
//            System.out.println("Count is " + count);
//            count++;
//        }
//
//        count=1;
//        do {
//            System.out.println("Count is " + count);
//            count++;
//        }while (count!=6);

        int count = 0;
        int num = 4;
        int finishNum = 20;
        while (num <= finishNum){
            num++;
            if (!isEvenNumber(num)){
                continue;
            }
            System.out.println("Even Number is " + num);
            count++;
            if (count == 5){
                break;
            }
        }
        System.out.println("Total even number found " + count);
    }


    public static boolean isEvenNumber(int num){
        if ((num % 2) == 0){
            return true;
        }
        return false;
    }
}
