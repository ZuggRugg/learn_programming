#[allow(unused_imports)]

use std::io;

// strings, mutability, borrow checker


fn main() {

    println!("Hello");


    // string literals are immutable
    let x = ", another string";
    let mut s = String::from("hello");

    s.push_str(x);

    println!("{s}");

}
