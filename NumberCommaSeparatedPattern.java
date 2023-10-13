public class NumberCommaSeparatedPattern {

    public static void main(String[] args) {
        int num = 12345678;
        char[] charArr = String.valueOf(num).toCharArray();

        int digits = 0;
        int count = 1;
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < charArr.length; i++) {
            result.append(charArr[i]);
            digits++;

            if (digits == count && i != charArr.length - 1) {
                result.append(",");
                digits = 0;
                count++;
            }
        }
        System.out.println(result);
    }
}
