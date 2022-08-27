fn main(){
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed to read line");
    let buff : Vec<i32> = buffer.split_whitespace().map(|s| s.trim().parse().expect("parsing error")).collect::<Vec<_>>();
    let mut a : i32 = 1;
    while a <= 9 {
        println!("{} * {} = {}", buff[0], a, buff[0] * a);
        a += 1;
    }

    return;
}