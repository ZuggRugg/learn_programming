#[allow(unused_imports)]
use std::io;

fn main() {

    let new_num : i32 = (5*51*-40)-42;

    println!("{}", new_num);

    let mut y : f32 = 2.07182818;
    y = y + 1.0;
    println!("{}", y);

    println!("{}", new_func());

    let n = -15;

    if n < 0 {
        print!("{} is negative", n);
    } else if n > 0 {
        print!("{} is positive", n);
    } else {
        print!("{} is zero", n);
    }

    println!("\n{}", args_func(5, 4));

}

fn new_func() -> i32 {
    println!("This is my new function!!!!!");

    let return_num : i32 = 5;

    return_num
}

fn args_func(newnum: i32, another: i32) -> i32 {
    let mut x : i32 = 51;
    x = x * 4;
    x = x + newnum + another;
    x
}

