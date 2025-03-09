function throttling(fn: (...args: any) => void, delay: number) {
  let lastCall = 0;

  return function (...args: any) {
    let now = Date.now();
    if (now - lastCall < delay) {
      return;
    }
    lastCall = now;
    return fn(...args);
  };
}

function sendMessage(str: string) {
  console.log(str);
}

const sendMessageWithThrottling = throttling(sendMessage, 2000);

sendMessageWithThrottling("hii");
sendMessageWithThrottling("hii 1");
sendMessageWithThrottling("hii 2");
sendMessageWithThrottling("hii 3");
sendMessageWithThrottling("hii 4");

setTimeout(() => {
  sendMessageWithThrottling("hii 5");
}, 1985);
